// Input: message = ["hello","world","leetcode"], bannedWords = ["world","hello"]
//true

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedwords) {
        unordered_map<string,int>mp;
        int n=message.size();
        int count=0;
        int m=bannedwords.size();
        for(int i=0;i<m;i++)
        {
            mp[bannedwords[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            auto it=mp.find(message[i]);
            if(it!=mp.end())
            {
                count++;
            }
            if(count>=2)
            {
                return true;
            }
        }
        return false;
    }
};