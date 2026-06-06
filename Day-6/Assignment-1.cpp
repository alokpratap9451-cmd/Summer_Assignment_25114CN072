#include <bits/stdc++.h>
using namespace std;
int main(){
    int bin=0,digit=0,n,place=1;
    cout<<"Enter the decimal number : ";
    cin>>n;
    while(n>0){
        digit=n%2;
        bin+=digit*place;
        place*=10;
        n/=2;
    }
    cout<<"the binary code of the digit is "<<bin;
    return 0;
}