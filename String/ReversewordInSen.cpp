#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            string word="";
            while(s[i]!=' ' && i<s.size())
            {
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0)
            {
                ans+=' '+word;
            }
        }
        return ans.substr(1);
        
    }
};