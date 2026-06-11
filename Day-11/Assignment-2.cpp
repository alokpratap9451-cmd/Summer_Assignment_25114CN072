#include<bits/stdc++.h>
using namespace std;
int maxof(int num1, int num2){
if(num1>num2){
    return num1;
}
else{ 
return num2;
}
}
int main(){
    int num1,num2,max;
    cout<<"Enter the two number to ckeck maaximum : ";
    cin>>num1 >>num2;
cout<<"The maximum no. is "<<maxof(num1,num2);
}
//completed