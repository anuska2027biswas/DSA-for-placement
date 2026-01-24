#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        // code here
        vector<int>nge(n);
        stack<int>st;
        
        for(int i=n-1;i>=0;i--)
        {
            while((!st.empty()) && arr[i]>=st.top())
            {
                st.pop();
            }
                if(st.empty())
                {
                    nge[i]=-1;
                    
                }
                else
                {
                    nge[i]=st.top();
                }
                st.push(arr[i]);
            
            
        }
        return nge;
    }
};