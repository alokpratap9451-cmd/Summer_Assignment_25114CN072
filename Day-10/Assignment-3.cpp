#include <bits/stdc++.h>
using namespace std;
int main(){
    int j,n,t=1,s;
    cout<<"Enter the no. of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            cout<<" ";
        }
        int m=1;
        for (j=0;j<i+1;j++)
        {
            cout<<m;
            m++;
        }
        for(j=i;j>=1;j--){
            cout<<j;
           
        }
        cout<<endl;
    }
    return 0;
}