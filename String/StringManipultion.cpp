// Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
// Output: 3

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>st;
        
        for(auto word:arr)
        {
            if(!st.empty() && st.top()==word)
            {
                st.pop();
            }
            else{
                st.push(word);
            }
        }
        return st.size();
    }
};