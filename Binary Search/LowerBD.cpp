//Code for lower bound and also floor in a ceil

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lowerBound(vector<int>& arr, int target) {
        int low = 0;
        int n=arr.size();
        int high = n - 1;
        int ans = arr.size();   // default if not found
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(arr[mid] >= target)
            {
                ans = mid;          // store possible answer
                high = mid - 1;     // move left
            }
            else
            {
                low = mid + 1;      // move right
            }
        }
        return ans;
    }
};