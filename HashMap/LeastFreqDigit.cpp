#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>mp;

        while (n > 0) {
            int digit = n % 10;
            mp[digit]++;
            n = n / 10;
        }
        int minfreq = INT_MAX;
        int element = -1;
        for (auto it : mp) {
            if (it.second < minfreq) {
                minfreq = it.second;
                element = it.first;

            }
            else if(it.second==minfreq)
            {
                element=min(element,it.first);
            }
        }
        
        return element;
    }
};