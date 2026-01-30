// nums = [1,3,5,4,7]
// Output: 3

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maxlen=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                count++;
            }
            else
            {
                count=1;
            }
            maxlen=max(count,maxlen);
        }
        return maxlen;
    }
};