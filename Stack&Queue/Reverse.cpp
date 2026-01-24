#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reverse(const string& s) {
        // code here
        stack<char>st;
        string res="";
        char n=s.size();
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
        }
        while(!(st.empty())){
        res+=st.top();
        st.pop();
        }
        return res;
    
    }
};