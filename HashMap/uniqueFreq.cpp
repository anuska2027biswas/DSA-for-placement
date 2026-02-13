
#include<bits/stdc++.h>
using nmespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        unordered_map<int,int>freq;
        for(auto it:mp)
        {
            freq[it.second]++;
            if(freq[it.second]>1)
            {
                return false;
            }
        }
        return true;;

    }
};