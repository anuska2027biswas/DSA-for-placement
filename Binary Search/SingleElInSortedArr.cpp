#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) //single el return that el
            return nums[0];
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (mid == 0 && nums[0] != nums[1]) { //if first el single return that
                return nums[0];
            }
            if (mid == n - 1 && nums[n - 1] != nums[n - 2]) { //if last el single return that
                return nums[n - 1];
            }
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) { //if mid is single el return that
                return nums[mid];
            }
            if (mid % 2 == 0) // each side has even number of elements(even mid->even el)
            {
                if (nums[mid] == nums[mid - 1]) { //if matched with previous single element resent that side only
                   end=mid-1;
                } else {
                    start=mid+1;
                }
            }
            else{ //each side has odd number of elemts (odd mid->odd el)
                if(nums[mid]==nums[mid-1]) //if matched with previous than even elements left so single eleemnt present in right side(opposite side)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};