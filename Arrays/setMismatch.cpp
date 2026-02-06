#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end()); //sorting to identify the duplicates and push them
        vector<int>ans;
        int actualsum=(n*(n+1))/2;
        int originalsum=nums[0];
        int duplicate=-1;
       for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                duplicate=nums[i]; //duplicate is not pushed immediately beacuse there can be more than two duplicate numbers in the array
                
            }
            originalsum+=nums[i];
            
        }
        //int missing=actualsum-(originalsum-duplicate);
        ans.push_back(duplicate);
        ans.push_back(actualsum-(originalsum-duplicate)); //missing no logic is best fitted just that in missing no we did not have any missing number here we have so we have to deduct it from the originbal sum
        return ans; 
    }
};