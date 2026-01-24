#include<bits/stdc++.h>
using namespace std;
class MyStack {
private:
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int n=q.size(); //because size needs to be clculated before push operation as this are the elements where loops will be used to pu them behind the pushed element
        push(x);
        for(int i=0;i<n;i++)
        {
            q.push(q.front());
            q.pop();

        }
   }
   int pop()
   {
        int val=q.front(); //we put this in val because after popping we will lose the eleemnt and returning the front will return the element next to the one popped
        q.pop();
        return val;
   }
   int top(){
     return q.front();
   }

   bool empty(){
    return q.empty();
   }

};