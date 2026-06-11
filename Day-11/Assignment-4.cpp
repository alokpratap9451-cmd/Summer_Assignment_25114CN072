#include <bits/stdc++.h>
using namespace std;
int factof(int n)
{
    if (n==0||n==1){
        return 1;
    }
    else{
        int fac=1;
        for(int i=1;i<n+1;i++){
          fac=fac*i;  
        }
        return fac;
    }
}
int main(){
    int n,fac;
    cout<<"Enter the number to calculate factorial : ";
    cin>>n;
    fac=factof(n);
    cout<<"The factorial of "<<n<<" is "<<fac;
}
//completed