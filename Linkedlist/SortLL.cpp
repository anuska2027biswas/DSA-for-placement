
#include <iostream>
#include<vector>
#include<algorithm>
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
ListNode* sortList(ListNode* head) {
    
    vector<int> arr;
    ListNode* temp = head;

    // Store values
    while (temp != NULL) {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    // Sort values
    sort(arr.begin(), arr.end());

    // Copy back to list
    temp = head;
    int i = 0;
    while (temp != NULL) {
        temp->val = arr[i];
        i++;
        temp = temp->next;
    }

    return head;
}

