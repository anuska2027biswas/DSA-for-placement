#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry)
        {
            int digit=carry;
            if(i>=0)
            {
                digit+=num1[i] - '0';
                i--;
            }
            if(j>=0)
            {
                digit+=num2[j] -'0';
                j--;
            }
            res.push_back((digit%10) +'0');
            carry=digit/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};