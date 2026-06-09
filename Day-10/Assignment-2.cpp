#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the no of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        //for space
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        //for star
        for(j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//completed