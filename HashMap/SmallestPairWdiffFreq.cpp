//leet3852

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
         {
             mp[nums[i]]++; 
         }
        vector<int> ans;
        for (auto it : mp) {
            ans.push_back(it.first);
        }
        sort(ans.begin(), ans.end());
        int firstfreq=mp[ans[0]];
        for (int i = 1; i < ans.size(); i++) {
            
            if (mp[ans[i]]!=firstfreq) {
                return {ans[0], ans[i]};
            }
        }
        return {-1, -1};
    }
};