#include<bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool isBadVersion(int n)
    {
        //This is given by leetcode
    }
    int firstBadVersion(int n) {
        int low=1; //As version numbers start from 1 not 0
        int high=n; //on the last number present
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
          if(isBadVersion(mid)==false)
          {
            low=mid+1;
          }  
          else{
            high=mid-1;
          }
        }
        return low;
    }
};