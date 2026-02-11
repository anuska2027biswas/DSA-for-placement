// Input: s = "abacbc"
// Output: true
// Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        auto it=mp.begin();
        int count=it->second;
        for(auto p:mp)
        {
            if(p.second!=count)
            {
                return false;
            }
        }
        return true;
    }
};