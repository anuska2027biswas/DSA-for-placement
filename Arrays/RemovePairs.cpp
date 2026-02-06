#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i]; //modify the own array
                k++; //k index where will last will give exactly the number of index or count of numbers that is not equal to val
            }
        }
        return k;
    }
};