#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int m = t.size();
        int i = 0;
        int j = 0;
        int count = s.size();
        while (count > 0 && j<m) {
            if (s[i] == t[j]) {
                count--;

                i++;
            }
            j++;
        }
        return count == 0;
    }
};