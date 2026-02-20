#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchInsertK(vector<int> &arr, int target) {
        // code here
        int low=0;
        int n=arr.size();
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[low]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
};