#include <bits/stdc++.h>
using namespace std;
int main(){
    int bin,dec=0,count=0;
    cout<<"Enter the binary number : ";
    cin>>bin;
    while(bin>0){
        int digit=bin%10;
        dec+=pow(2,count)*digit;
        count++;
        bin/=10;
    }
    cout<<"the decimal no. of the given binary number is : "<<dec;
    return 0;
}