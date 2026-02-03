// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxval=nums[0];
        int maxidx=0;
        int n=nums.size();
        for(int i=1;i<n;i++)  //find the largest number
        {
           if(nums[i]>maxval)
           {
            maxval=nums[i]; //store the largest in maxval and its index in maxidx
            maxidx=i;
           }
        }

        for(int i=0;i<n;i++){
            if(i!=maxidx && maxval<2*nums[i]) //if i is not the maxidx and it is less than 2*nums[i] return -1 or return the index
            {
                return -1;
            }
        }
        

        return maxidx;

    }
};