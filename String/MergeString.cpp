#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string ans = "";
        int i = 0;
        int j = 0;
        while (i < n && j < m) 
            {
                ans += word1[i];
                ans += word2[j];
                i++;
                j++;
            }
        
            while(i<word1.size())
            {
                ans+=word1[i];
                i++;
            }
            while(j<word2.size()){
                ans+=word2[j];
                j++;
            }
        
        return ans;
    }
};