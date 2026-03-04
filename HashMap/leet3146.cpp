//permutation difference between two strings
// Input: s = "abc", t = "bac"

// Output: 2
// That is, the permutation difference between s and t is equal to |0 - 1| + |1 - 0| + |2 - 2| = 2.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int i = 0;
        int j = 0;
        int ans = 0;
        while (i != n1) {
            if (s[i] == t[j]) {
                ans += abs(i - j);
                i++;
                j = 0;
            } 
            else {
                j++;
            }
        }
        return ans;
    }
};