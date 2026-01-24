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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    vector<int>arr={12,3,4,5};
    Node* head=convertarr(arr);
    print(head);
    cout<<head->data;
}





