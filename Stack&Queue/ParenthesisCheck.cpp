#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int closing(string s, int pos) {
        // code here.
        stack<char>st;
        int n=s.size();
        st.push(s[pos]);
        for(int i=pos+1;i<n;i++)
        {
            if(s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==']')
            {
                st.pop();
            
                if(st.empty())
                {
                    return i;
                }
            }
        }
        return -1;
    }
};