#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, digit, rev=0;
    cout<<"Enter the number to check the that numberr is pallindrone or not "<<endl;
    cin>>n;
    int m=n;
    while(n>0){
        digit =n%10;
        rev=rev*10+digit;
    n/=10;
    }
    if(m==rev)
    cout<<"given number is pallindrone number";
    else
    cout<<"it is not a pallindrone number";
    return 0;
}