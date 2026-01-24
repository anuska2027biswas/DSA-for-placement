//Return the number of pairs

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int i=0;
        int j=arr.size()-1;
        int ans=0;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(sum==target)
            {
                if(arr[i]==arr[j]) //if the whole array has all the same elements
                {
                    int temp=j-i; //minus of index
                    ans+=(temp*(temp+1))/2;
                    break;
                    
                }
                else{
                    int left=1;
                    int right=1;
                    while(i<j && arr[i]==arr[i+1])
                    {
                        left++;
                        i++;
                    }
                    while(i<j && arr[j]==arr[j-1])
                    {
                        right++;
                        j--;
                    }
                    ans+=(left*right);
                    i++;
                    j--;
                }
            }
            else if(sum<target) i++;
            else j--;
        }
        return ans;
        
    }
};