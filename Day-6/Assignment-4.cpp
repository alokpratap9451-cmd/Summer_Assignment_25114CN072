#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,pow,i,value=1;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power of the given number : ";
    cin>>pow;
    for(i=0;i<pow;i++){
        value*=num;
    }
    cout<<"The value of the "<<num<<" to the power "<<pow<<" is "<<value<<" .";
    return 0;
}