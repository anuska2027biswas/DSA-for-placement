#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        int n=prices.size();
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && prices[st.top()]>=prices[i])
            {
                int idx=st.top();
                st.pop();
                res[idx]=prices[idx]-prices[i];

            }
            st.push(i);
        }
        while(!st.empty())
        {
            int idx=st.top();
            st.pop();
            res[idx]=prices[idx];
        }
        return res;
    }
};