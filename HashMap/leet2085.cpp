#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for (int i = 0; i < n; i++) {
            mp1[words1[i]]++;
        }
        for (int i = 0; i < m; i++) {
            mp2[words2[i]]++;
        }
        int count = 0;
        for (auto it : mp1) {

            if (it.second == 1 && mp2[it.first] == 1) {
                count++;
            }
        }
        return count;
    }
};