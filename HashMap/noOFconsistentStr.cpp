// Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
// Output: 2
// Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.



#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(char ch:allowed)
        {
            mp[ch]++; //so we hve a->1,b->1
        }
        int count=0;
        for(string word :words)
        {
            bool valid=true;
            for(char ch:word)
            {
                if(mp.find(ch)==mp.end()) //now in map I have  and b so when traversing the string we have d there but in map d is absent so we do valid false and break
                {
                    valid=false;
                    break;
                }
            }
            if(valid)
            {
                count++;
            }
        }
        return count;
    }
};