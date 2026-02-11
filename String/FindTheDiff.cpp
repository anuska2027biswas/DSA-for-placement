// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ssum = 0, tsum = 0;

        for (int i = 0; i < s.size(); i++) {

            ssum += s[i];
        }
        for (int i = 0; i < t.size(); i++) {

            tsum += t[i];
        }
        return (char)tsum - ssum;
    }
};