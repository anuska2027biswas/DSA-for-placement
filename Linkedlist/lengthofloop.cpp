

#include <iostream>
using namespace std;

// Definition of singly linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

    int findLengthOfLoop(ListNode *head) {

        if (head == NULL || head->next == NULL)
            return 0;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            // Loop detected
            if (slow == fast) {
                int cnt = 1;
                fast = fast->next;

                while (slow != fast) {
                    cnt++;
                    fast = fast->next;
                }

                return cnt;   // length of loop
            }
        }

        // No loop
        return 0;
    }

