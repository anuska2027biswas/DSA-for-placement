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
Node* delfromhead(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node* prev=head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}
Node* deletefromtail(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    Node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next->back=NULL;
    free(temp->next);
    temp->next=NULL;
    return head;
}
Node * deletefromanyIndex(Node* head,int index)
{
    if(head==NULL)
    {
        return NULL;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==index)
        {
            break;
        }
        temp=temp->next;

    }
    Node *prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL && front==NULL)
    {
        delete temp;
        return NULL;
    }
    else if(prev==NULL)
    {
        return delfromhead(head);
    }
    else if(front==NULL)
    {
        return deletefromtail(head);
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        free(temp);
    }
    return head;
}
void deletefromvalue(Node* temp)
{
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL)
    {
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    free(temp);
}
int main()
{
    vector<int>arr{2,3,4,5,6};
    Node* head=convertarrToDoubly(arr);
    deletefromvalue(head->next);
    print(head);

}










