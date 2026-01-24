#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        
        // code here
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && mp[arr[i]]>=mp[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=-1;
        }
        else{
           ans[i]=st.top();
        }
        
        st.push(arr[i]);
        }
        return ans;
    }
};
