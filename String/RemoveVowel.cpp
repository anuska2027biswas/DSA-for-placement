// User function template for C++
#include<iostream>
using namespace std;
class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string res="";
        for(char c:s)
        {
           if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E'
           || c=='I' || c=='O' || c=='U'))
           {
               res+=c;
           }
        }
        return res;
        
    }
};