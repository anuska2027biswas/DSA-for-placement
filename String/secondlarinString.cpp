// Input: s = "dfa12321afd"
// Output: 2
// Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int secondHighest(string s) {
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans.push_back(s[i]-'0');
            }
        }
        int largest=-1;
        int slargest=-1;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>largest)
            {
                largest=ans[i];
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>slargest && ans[i]<largest)
            {
                slargest=ans[i];
            }
        }

        return slargest;
    }
};