#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"Enter the number to find factorial ";
    cin>>n;
    if(n==0){
        cout<<"1";
    }
    else{
        for(int i=1;i<=n;i++){
            fac*=i;
        }
        cout<<fac;
        }
    
    return 0;
}