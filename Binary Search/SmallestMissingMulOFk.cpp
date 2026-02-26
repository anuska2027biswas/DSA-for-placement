// Leetcode 3718
// Example 1:

// Input: nums = [8,2,3,4,6], k = 2

// Output: 10

// Explanation:

// The multiples of k = 2 are 2, 4, 6, 8, 10, 12... and the smallest multiple missing from nums is 10.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool ismultiple(vector<int>nums,int  x) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
           int mid=(low+high)/2;
           
           
            if(nums[mid]==x)
            {
                return true;
            }
            else if(nums[mid]<x)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
           
           
        }
        return false;
    }
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int i=1;
        while(true) {
            
            int value = k * i;
            if (!ismultiple(nums, value)) {
                return k * i;
            }
            i++;
        }

        return -1;
    }
};