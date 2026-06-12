#include <bits/stdc++.h>
using namespace std;
int palindrome(int n){
    int rev=0,digit=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the number to check palindrome or not : ";
    cin>>n;
    int original=n;
    int rev=palindrome(n);
    if(original==rev){
        cout<<original<<" is a palindrome number.";
    }
    else{

        cout<<original<<" is not a palindrome number";
    }
    return 0;
}
  //complete