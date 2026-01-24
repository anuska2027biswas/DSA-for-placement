#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
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
};

    ListNode * deleteAllOccurrences(ListNode* head, int target) {
       ListNode* temp=head;
       
       while(temp!=NULL)
       {
        if(temp->val==target)
        {
            if(temp==head)
            {
                head=temp->next;
            }
            ListNode* previosnode=temp->prev;
            ListNode* nextnode=temp->next;
            if(previosnode){
                previosnode->next=nextnode;
            }
            if(nextnode)
            {
                nextnode->prev=previosnode;
            }
            delete(temp);
            temp=nextnode;
            
        }
        else{
               temp=temp->next;
            }
        
       }
       return head;

    }
    int main()
    {

    }
