#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int reverse=0;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0){ //for negative numbers
        int number=n%10;
        if(reverse<INT_MIN || reverse>INT_MAX){ //for very big and very small numbers
            return 0;
        }
        reverse=reverse*10+number;
        n=n/10;
    }

    cout<<"The reverse number is: "<<reverse;

}
