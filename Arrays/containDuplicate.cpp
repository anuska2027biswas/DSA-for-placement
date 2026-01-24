#include<iostream>
using namespace std;
int main()
{
    int n;
    int nums[n];
 for(int i=0;i<n;i++){
            for(int j=n;j<=1;j--)
            {
                if(nums[j]==nums[i])
                {
                return true;

                }
            
            
        }
        }
        return false;
    }


    //using hashmap
/*
    class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1)
            {
                return true;
            }
        }
        return false;
    }
};
*/
