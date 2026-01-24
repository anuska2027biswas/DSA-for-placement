//Doubly LL is used in Browser

#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertarrToDoubly(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* InsertBeforehead(Node* head,int val)
{
    Node *newHead=new Node(val,head,nullptr); //made the node
    head->back=newHead;

    return newHead;
   
}
Node * InsertBeforeTail(Node* head,int val)
{
   if(head->next==NULL)
   {
    return InsertBeforehead(head,val);
   }
   Node*tail=head;
   while(tail->next!=NULL)
   {
    tail=tail->next;
   }
   Node *prev=tail->back;
   Node *newNode=new Node(val,tail,prev);
   prev->next=newNode;
   tail->back=newNode;
   return head;
}
Node* InsertBeforek(Node *head,int k,int val)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }  
    if(k==1){
        return InsertBeforehead(head,val);
    }
    
        Node* prev=temp->back;
        Node* newNode=new Node(val,temp,prev);   
        prev->next=newNode;
        temp->back=newNode;
    
    return head;
    }
Node* InsertAtTail(Node* head,int val)
{
    if(head==NULL)
    {
        return new Node(val);
    }
    Node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* newnode=new Node(val,nullptr,tail);
    tail->next=newnode;
    newnode->back=tail;
    
    return head;
}
    
void InsertBeforevalue(Node* temp,int val)
{
   Node* prev=temp->back;
   Node* newNode=new Node(val,temp,prev);
   prev->next=newNode;
   temp->back=newNode;

}
Node* reverse(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* prev=NULL;
    Node* current=head;
    while(current!=NULL)
    {
        prev=current->back;
        current->back=current->next;
        current->next=prev;
        current=current->back;
    }
    return prev->back;
}
int main()
{
    vector<int>arr{2,3,4,5,6};
    Node* head=convertarrToDoubly(arr);
    // InsertBeforevalue(head->next->next,78);
    head=reverse(head);
    print(head);

}










