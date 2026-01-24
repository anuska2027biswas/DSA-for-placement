#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string modify(string& s) {
        // code here.
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
            {
                res+=s[i];
            }
        }
        return res;
    }
};