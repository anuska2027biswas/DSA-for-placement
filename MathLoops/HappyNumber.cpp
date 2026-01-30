#include<iostream>
using namespace std;
int nextnum(int n)
{
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum+=d*d;
        n=n/10;
    }
    return sum;
}
bool happynumber(int n)
{
    int slow=0;
    int fast=nextnum(n);
    while(slow!=fast && fast!=1)
    {
        slow=nextnum(slow);
        fast=nextnum(nextnum(fast));
    } 
    return fast==1;
}