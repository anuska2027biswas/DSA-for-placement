// Input: nums = [3,1,2], k = 1

// Output: 2

// Explanation: take element count of the number greater than nums[i] comapre with k if greater than increment the qualified count and return the qualified number

// The elements 1 and 2 each have at least k = 1 element greater than themselves.
// ​​​​​​​No element is greater than 3. Therefore, the answer is 2.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countfreq(vector<int>&nums,int key) //To take the upper bound of the nums[i] or key 
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        int freq=0;
        while(low<=high)
        {
           int mid=(low+high)/2;
           if(nums[mid]>key)
           {
            ans=mid;
            high=mid-1;
           }
            else{
                low=mid+1;
            }
        }
        if(ans==n)
        {
            freq=0;
        }
        else{
            freq=n-ans;
        }
        return freq;
    }
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int qualified=0;
        for(int i=0;i<n;i++)
        {
            int freq=countfreq(nums,nums[i]);
            if(freq>=k)
            {
                qualified++;
            }
        }
        return qualified;
    }
};