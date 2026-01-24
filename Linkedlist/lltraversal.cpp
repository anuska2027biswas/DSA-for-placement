#include<iostream>
#include<vector>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

Node* convertarr(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node *current=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        current->next=temp;
        current=temp;

    }
    return head;
}
int lengthOfLL(Node* head)
{
    int cnt=0;
    Node* temp=head;
     while(temp)
    {
        // cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int check(Node* head,int val)
{
    Node* temp=head;
    while(temp)
    {
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}
int main()
{
    vector<int>arr={12,3,4,5};
    Node* head=convertarr(arr);
    cout<<lengthOfLL(head)<<"\n";
    cout<<check(head,8);
  
    
}





