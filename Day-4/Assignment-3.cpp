#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,digit=0,sum=0;
    cout<<"Enter the number to check the armstrong ;  ";
    cin>>n;
     int m=n;
     int temp=n;
      while(n>0)      //to calculate no. of digit 
      {
        digit=n%10;
        i++;
        n=n/10;
      }
      while(temp>0)
      {
        digit=temp%10;
        sum+=pow(digit,i);
        temp/=10;
         }
      if(sum==m)
      cout<<m<<" is an armstrong number. ";
      else
      cout<<m<<" not a armstrong number.";
  return 0;
}