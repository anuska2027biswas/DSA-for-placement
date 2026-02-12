// Input: arr = [1,2,2,3,3,3]
// Output: 3
// Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int maxlucky = -1; //if not a lucky no
        for (auto it : mp) {
            if (it.first == it.second) {
                maxlucky = max(maxlucky, it.first);
            }

        }
        return maxlucky;
    }
};