#include <bits/stdc++.h>
#include <cmath>
using namespace std;
bool isArmstrong(int num) {
    int original=num,rem,result=0,digits=0;
    int temp = num;
    while(temp!= 0){
        digits++;
        temp/=10;
    }
    temp=num;
    while(temp!=0){
        rem=temp%10;
        result+=pow(rem,digits);
        temp/=10;
    }

    return(result==original);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}