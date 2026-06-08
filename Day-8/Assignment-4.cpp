#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the no. of row : ";
    cin>>n;
     int m=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
        cout<<m;
        }
        m++;
        cout<<endl;
    }
    return 0;
}