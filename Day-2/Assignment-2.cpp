#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"enter the number ";
cin>>n;
while(n!=0){
   int digit=n%10;
   rev=rev*10+digit;
   n/=10;
   
}
cout<<"the reverse of the given number is "<<rev<<endl;
    return 0;
}