//leet3005
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int maxlen=0;
        for(auto it :mp)
        {
           maxlen= max(maxlen,it.second);
        }
        int ans=0;
        for(auto it:mp)
        {
            if(it.second==maxlen)
            {
                ans+=it.second;
            }
        }
        return ans;

    }
};