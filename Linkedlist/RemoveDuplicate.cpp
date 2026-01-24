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



    ListNode * removeDuplicates(ListNode *head) {
    ListNode* temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        ListNode* nextnode=temp->next;
        while(nextnode!=NULL && nextnode->val==temp->val)
        {
            ListNode* duplicate=nextnode;
            nextnode=nextnode->next;
            delete(duplicate);
        }
        temp->next=nextnode;
        if(nextnode){ //nextnode if not null
        nextnode->prev=temp;
        }
        temp=temp->next;
    }
    return head;
    }
    int main()
    {
        
    }
