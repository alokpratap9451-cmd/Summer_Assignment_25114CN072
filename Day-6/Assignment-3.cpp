#include <bits/stdc++.h>
using namespace std;
int main(){
     int bin=0,digit=0,n,place=1,count=0;
    cout<<"Enter the decimal number : ";
    cin>>n;
    while(n>0){
        digit=n%2;
        bin+=digit*place;
        place*=10;
        n/=2;
    }
    while(bin>0){
      int dgt=bin%10;
       if(dgt==1){
       count++;
       }
       bin/=10;
    } 
    cout<<"The count set bits are "<<count<<".";
    return 0;
}