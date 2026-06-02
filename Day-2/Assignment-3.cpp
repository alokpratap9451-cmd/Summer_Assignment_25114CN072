#include <bits/stdc++.h>456

using namespace std;
int main(){
    int n,digit,product=1;
    cout<<"Enter the number to determine the product of digit ";
    cin>>n;
    while(n>0){
        digit=n%10;
        product*=digit;
        n/=10;
    }
    cout<<"The product of the digit is "<<product<<"."<<endl;
    return 0;
}