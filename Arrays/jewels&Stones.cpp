#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char ch:jewels) //iterarte every charecter in jewels string
        {
           for(char st:stones) //every char in stones string
           {
            if(ch==st) //now check the values if same count is incremented
            {
                count++;
            }
           }
        }
        return count;
    }
};