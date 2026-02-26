#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        for(int i=1;i<n;i++)
        {
            int prevele=nums[i-1];
            int currele=nums[i];
            while(prevele+1!=currele) //if will add only 1 missing number but while will run many
            //prev+1 should be the current element if not that will be the missing number 
            {
                ans.push_back(prevele+1);
                prevele++;
            }
        }
        return ans;
    }
};