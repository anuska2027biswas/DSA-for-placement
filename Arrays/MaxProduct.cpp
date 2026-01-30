#include<bits/stdc++.h>
using namespace std;

int maxproduct(vector<int>nums)
{
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int maxi=1;

    if(nums[0]>=0){
        int maxi=nums[n-1]*nums[n-2]*nums[n-3];
    }
    else{
        int maxi=nums[0]*nums[1]*nums[n-1];
    }
    
    return maxi;
    
}