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
ListNode* mergetwosortedlist(ListNode* head1,ListNode* head2){
    ListNode* t1=head1;
    ListNode* t2=head2;
    ListNode* dnode=new ListNode(-1);
    ListNode* temp=dnode;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->val > t2->val)
        {
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
        else{
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
    }
    if(t1)
    {
        temp->next=t1;
    }
    else{
        temp->next=t2;
    }
    return  dnode->next;


}