// Reverse words with same vowel __COUNTER__
//Input: s = "cat and mice"

// Output: "cat dna mice"

// Explanation:​​​​​​​

// The first word "cat" has 1 vowel.
// "and" has 1 vowel, so it is reversed to form "dna".
// "mice" has 2 vowels, so it remains unchanged.
// Thus, the resulting string is "cat dna mice".


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int count=0;
        vector<string>words;
        string word="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
            }
            else{
                words.push_back(word);
                word="";
            }
        }
            words.push_back(word);
        int firstcount=0;
        for(char ch: words[0])
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                firstcount++;
            }

        }
        for(int i=1;i<words.size();i++){
            int count=0;
            for(char ch:words[i])
            {
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                {
                    count++;
                }
            }
            if(count==firstcount)
            {
                reverse(words[i].begin(),words[i].end());
            }
        
        }
        string result="";
        for(int i=0;i<words.size();i++)
        {
            result+=words[i];
            if(i!=words.size()-1)
            {
                result+=' ';
            }
        }
        return result;
    }
};