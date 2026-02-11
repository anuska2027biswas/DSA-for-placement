// Input: word1 = "abcdeef", word2 = "abaaacc"
// Output: true
// Explanation: The differences between the frequencies of each letter in word1 and word2 are at most 3:
// - 'a' appears 1 time in word1 and 4 times in word2. The difference is 3.
// - 'b' appears 1 time in word1 and 1 time in word2. The difference is 0.
// - 'c' appears 1 time in word1 and 2 times in word2. The difference is 1.
// - 'd' appears 1 time in word1 and 0 times in word2. The difference is 1.
// - 'e' appears 2 times in word1 and 0 times in word2. The difference is 2.
// - 'f' appears 1 time in word1 and 0 times in word2. The difference is 1.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mp;
        for(int i=0;i<word1.size();i++)
        {
            mp[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++)
        {
            mp[word2[i]]--;
        }
        for(auto it :mp)
        {
            if(abs(it.second )>3)
            {
                return false;
            }
        }
        return true;
    }
};