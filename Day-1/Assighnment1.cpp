#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,digit,sum=0;
    cout<<"Enter the number";   //taking input 
    cin>>n;
for(int i=1;i<n+1;i++){
    sum=sum+i;
}
cout<<"the sum of digit is"<<sum;
    return 0;
}