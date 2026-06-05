#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,digit=0,sum=0,fac=1;
    cout<<"Enter number to check strong number: ";
    cin>>n;
    int temp=n;
    while(n>0){
        digit=n%10;
        fac=1;
        for(i=1;i<=digit;i++){
            fac*=i;
        }
        n/=10;
        sum+=fac;

    }
    if(sum==temp)
    cout<<temp<<" is a strong number";
    return 0;
}