#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        if(s1[0]!=s2[0] || s1[0]!=s3[0] || s2[0]!=s3[0]) return -1;
        int i=0;
        for( i=0;i<n1 && i<n2 && i<n3;i++)
        {
            if(s1[i]==s2[i] && s2[i]==s3[i] && s1[i]==s3[i])
            {
                continue;
            }
            else{
                break;
            }
        }
        return (n1-i) + (n2-i) + (n3-i);


    }
};