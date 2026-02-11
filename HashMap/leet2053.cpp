// Input: arr = ["d","b","c","b","c","a"], k = 2
// Output: "a"
// Explanation:
// The only distinct strings in arr are "d" and "a".
// "d" appears 1st, so it is the 1st distinct string.
// "a" appears 2nd, so it is the 2nd distinct string.
// Since k == 2, "a" is returned. 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        int count=1;
        for (int i=0;i<arr.size();i++) {
            auto it =mp.find(arr[i]);
            if(it->second==1)
            {
                if(count==k)
                {
                    return it->first;
                }
                count++;
            }
           
        }
        return "";
    }
};