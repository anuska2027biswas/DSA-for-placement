

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n,0);
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                temp[idx]=nums[i];
                idx++;
            }

        }
        //while(temp.size()<n)
        //{
           // temp.push_back(0);
        
        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];
        }

        

        
       
    }
};