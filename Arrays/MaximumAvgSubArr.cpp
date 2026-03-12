#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) { //let k=4
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; i++) { //calculating the fisrt window or first set of k numbers nums[0],1,2,3
            sum += nums[i];
        }
        double maxsum = sum;
        for (int i = k; i < n; i++) { //let eg- i=4 k=4
            sum += nums[i]; //adding the forwrd element nums[4]
            sum -= nums[i - k]; //removing the backward element nums[4-4]->nums[0]
            maxsum = max(sum, maxsum);
        }
        return maxsum / k;
    }
};