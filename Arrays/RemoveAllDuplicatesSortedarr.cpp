
#include<bits/stdc++.h>
using namespace std;
class Solution {
    //optimal soln
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};




class Solution {
public:
// Brute soln
    int removeDuplicates(vector<int>& nums) {
       vector<int>temp;
       int n=nums.size();
       if(nums.size()==0) return 0;
       temp.push_back(nums[0]);
       for(int i=1;i<n;i++)
       {
          if(nums[i]!=nums[i-1]){
          temp.push_back(nums[i]);
          }
       } 
       for(int i=0;i<temp.size();i++)
       {
        nums[i]=temp[i];
       }
       return temp.size();
    }
};

