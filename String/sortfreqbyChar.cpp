#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char ch:s)
        {
            mp[ch]++;
        }
        vector<pair<int,char>>ans;
        for(auto it:mp)
        {
            ans.push_back({it.second,it.first}); //frequency and charecter
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        string result="";
        for(int k=n-1;k>=0;k++)
        {
            result.append(ans[k].first,ans[k].second); //count and than adding charecter as per count
        }
        return result;
    }
};
