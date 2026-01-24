#include<bits/stdc++.h>
using namespace std;
stack<int>S1,S2;

void move(){
    if(S2.empty())
    {
        while(!S1.empty())
        {
            S2.push(S1.top());
            S1.pop();
        }
    }
}
void push(int x){
    S1.push(x);
}

int pop(){
    move();
    int val=S2.top();
    S2.pop();
    return val;
}
int top(){
    move();
    return S2.top();
}
bool empty(){
    return S1.empty() && S2.empty();
}
int main(){
    push(5);
    push(10);
    push(20);
    push(30);

    cout << "Front: " << top() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;

    push(40);

    cout << "Front: " << top() << endl;

    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;
    cout << "Pop: " << pop() << endl;

    return 0;

}

