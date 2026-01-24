#include<iostream>
using namespace std;

#define MAX 50

int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
    cout<<"Stack Overflow";
    return;
    }
    top++;
    stack[top]=x;
    cout<<x<<"Pushed into stack";
}

void pop(){
    if(top==-1)
    {
        cout<<"Stack underflow";
    }
    cout<<stack[top]<<"popped from stack";
    top--;
}

void peek(){
    if(top==-1)
    {
        cout<<"Elements are not present in stack";
    }
    cout<<"Stack Top is "<<stack[top]<<endl;
}
void display(){
    if(top==-1)
    {
        cout<<"Stack is empty";
        return;
    }
    cout<<"stack elements: ";
    for(int i=top;i>=0;i--) //As we move downward of the stack from the top
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
