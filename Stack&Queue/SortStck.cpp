#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        int n=st.size();
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]=st.top();
            st.pop();
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            st.push(arr[i]);
        }
        
        
    }
};
