#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int index=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])  //to remove the duplicate
            {
                nums[index]=nums[i];
                index++;
            }
        }
        if(index<3)
        {
            if(index==1)
            {
                return nums[0];
            }
            else{
                return nums[index-1];
            }
        }
        return nums[index-3];
          
        
    }
};