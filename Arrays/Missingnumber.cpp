//using hashmap
#include<bits/stdc++.h>
using namespace std;
//Optimal soln


int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int sum=(n*(n+1))/2;
    int MissingSum=0;
    for(int i=0;i<n;i++)
    {
        MissingSum+=nums[i];
    }
    return sum-MissingSum;
}





//Brute soln

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};