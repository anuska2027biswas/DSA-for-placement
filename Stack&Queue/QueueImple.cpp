#include<bits/stdc++.h>
using namespace std;

const int size=10;

int q[size];
int front=-1;
int rear=-1;
int currsize=0; //keep counting the eleemnts in the queue

void enqueue(int x)
{
    if(currsize==size)
    {
        cout<<"overflow";
        return;
    }
    if(currsize==0) 
    {
        front=0;
        rear=0;
    }
    else{
        rear=(rear+1)%size; //Insertion from rear end

    }
    q[rear]=x;
    currsize++;
    
}
int pop(){
    if(currsize==0)
    {
        cout<<"Queue is empty";
        return;
    }
    int val=q[front];
    if(currsize==1)
    {
        
        front=-1;
        rear=-1;
        return val;
    }
    else{
        front=(front+1)%size;
        
    }
    currsize--;
    return val;
    
}
int top(){
    if(currsize==0)
    {
        cout<<"No element present";
        return -1;
    }
    
        int top=q[front];
        return top;
    
}
int sizee(){
    return currsize;
}
int main(){
    return 0;
}


