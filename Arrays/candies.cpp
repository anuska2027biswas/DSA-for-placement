#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        sort(candy.begin(),candy.end());
        int n=candy.size();
        int candysum=n/2;
        int count=1;
        int candytype=0;
        for(int i=1;i<n;i++)
        {
            if(candy[i]!=candy[i-1])
            {
                count++;               
            } 
        }
         candytype=min(candysum,count);
        return candytype;
    }
};