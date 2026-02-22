#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int evencount=0;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int count=0;
            while(num>0)
            {
                count++;
                num=num/10;
            }
            if(count%2==0)
            {
                evencount++;
            }
        }
        return evencount;
    }
};