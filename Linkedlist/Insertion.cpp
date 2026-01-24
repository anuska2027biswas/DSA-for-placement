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
Node* inserthead(Node* head,int val)
{
    Node* temp=new Node(val,head);
    return temp;

}
Node* inserttail(Node* head,int val)
{
    if(head==NULL)
    {
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newnode=new Node(val,NULL);
    temp->next=newnode;
    return head;
}
Node* insertAtAnyIndex(Node*head,int value,int index)
{
    if(head==NULL){
        if(index==1)
        {
            return new Node(value);
        }
        else{
            return head;
        }
    }
        if(index==1)
        {
            return new Node(value,head);
        }
        int cnt=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            if(cnt==index-1)
            {
                Node* x=new Node(value,temp->next);
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
        return head;   
}
Node* insertbeforeVal(Node* head,int el,int val)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->data==val)
    {
        return new Node(el,head);
    }
    Node* temp=head;
    bool found=false;
    while(temp->next!=NULL)
    {
        if(temp->next->data==val)
        {
            Node* x=new Node(el,temp->next);
            temp->next=x;
            found=1;
            break;
        }
        temp=temp->next;
    }
    if(found==false)
    {
        return head;
    }
    
    return head;
}
Node* removetheNthnode(Node* head,int N)
{
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    if(cnt==N)
    {
            Node* newhead=head->next;
            free(head);
            return newhead;
    }
    int res=cnt-N;
    Node* temp=head;
    while(res>1)
    {
        temp=temp->next;
        res--;

    }
    Node* delnode=temp->next;
    temp->next=temp->next->next;
    free(delnode);
    return head;


}
int main()
{
    vector<int>arr={2,34,67,43};
    Node* head=convertarr(arr);
    // head=inserthead(head,5);
    // head=inserttail(head,10);
    // head=insertAtAnyIndex(head,45,5);
    head=insertbeforeVal(head,100,67);
    print(head);
}