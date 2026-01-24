#include<iostream>
#include<vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        while(current!=NULL && current->next!=NULL )
        {
            if(current->val == current->next->val)
            {
                int val=current->val;
                while( current!=NULL && current->val==val)
                {
                    current=current->next;
                }
                if(prev!=NULL)
                {
                    prev->next=current;
                }
                else{
                    head=current;
                }
            }
            else{
                prev=current;
                current=current->next;
            }
        }
        return head;
    }
};