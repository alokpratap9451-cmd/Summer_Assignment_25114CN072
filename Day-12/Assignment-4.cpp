#include <bits/stdc++.h>
using namespace std;
void perfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++) {
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num)
        cout<<num<<" is a Perfect Number";
    else
        cout<<num<<" is not a Perfect Number";
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    perfect(number);
    return 0;
}