#include <bits/stdc++.h>
using namespace std;
int add(int x, int  y){
int sum=x+y;
return sum;
}
int main(){
    int a,b,sum;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    sum = add(a,b);
   cout<<sum;
    return 0;
}