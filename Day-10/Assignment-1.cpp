#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,n,j;
cout<<"Enter the no. of row : ";
cin>>n;
for(i=0;i<n;i++){
    //for space
    for(j=0;j<n-i-1;j++){
       cout<<" " ;
    }
    //{
    //for triangular pyramid
    for(j=0;j<=i;j++){
        cout<<"*";
    }
    for(j=1;j<=i;j++){
        cout<<"*";
    }
//} 
    cout<<endl;
}
}
//completed