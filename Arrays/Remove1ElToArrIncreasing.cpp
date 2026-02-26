// Input: nums = [1,2,10,5,7]
// Output: true
// Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
// [1,2,5,7] is strictly increasing, so return true.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[i-1])
            {
                count++;
            }
            if(count>1)
            {
                return false;
            }
            if(i>1 && nums[i]<=nums[i-2])
            {
                nums[i]=nums[i-1];
            }
        }
        return true;
    }
};