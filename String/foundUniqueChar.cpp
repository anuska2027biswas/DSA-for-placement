#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)  //used to store the freequency 
        {
            mp[s[i]]++;
        }
        for(int i=0;i<=n;i++) //iterate the string not the map because we have used unordered map and the output may be wrong due to not maintaning of the order
        {
            if(mp[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};