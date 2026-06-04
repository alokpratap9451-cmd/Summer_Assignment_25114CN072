#include <bits/stdc++.h>
using namespace std;
int main (){
    int temp=0,n,i,first=1,second=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
   for(i=3;i<=n;i++){  //to calculate fibonacci series
    temp=first+second;
     second=first;
    first=temp;
   }
   cout<<temp;
   return 0;
}