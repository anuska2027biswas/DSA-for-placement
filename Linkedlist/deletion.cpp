#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    Node* next;
    int data;

    public:
    Node(int data1,Node *next1)
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
Node* convertarr(vector<int>arr)
{
    Node* head=new Node(arr[0]);
    Node* current=head;
    for(int i=1;i<arr.size();i++)
    {
         Node* temp=new Node(arr[i]);
         current->next=temp;
         current=temp;
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
Node* removehead(Node *head)
{
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}
Node* removetail(Node* head)
{
   
    if(head == NULL || head->next==NULL) return NULL;
    
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete (temp->next);
    temp->next=nullptr;
    return head;
}

Node *removeAtAnyEnd(Node* head,int index){
    if(head==NULL) return head;
    if(index==1)
    {
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==index)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
   
    }
    return head;
    
}
Node* removeElement(Node* head,int element)
{
    if(head==NULL) return head;
    if(head->data==element)
    {
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
       
        if(temp->data==element)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
   
    }
    return head;
}
int main()
{
    vector<int>arr={2,34,67,43};
    Node* head=convertarr(arr);
    // head=removehead(head);

    // head=removetail(head);

    // cout<<"Enter the index to be removed: ";
    // int index;
    // cin>>index;
    // head=removeAtAnyEnd(head,index);
    head=removeElement(head,43);
    print(head);
}