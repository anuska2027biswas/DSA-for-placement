//leetcode 3847

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int FirstPlayerActive=1;
        int SecondPlayerActive=0;
        int firstscore=0;
        int secondscore=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            {
                FirstPlayerActive=1-FirstPlayerActive;
                SecondPlayerActive=1-SecondPlayerActive;
            }
            if(i%6==5)
            {
                FirstPlayerActive=1-FirstPlayerActive;
                SecondPlayerActive=1-SecondPlayerActive;
            }
            if(FirstPlayerActive==1){
                firstscore+=nums[i];
            }
            else{
                secondscore+=nums[i];
            }
                
              
        }
        return (firstscore-secondscore);
    }
};