#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number to print table";
    cin>>n;
    for(i=1;i<11;i++){
        int product=n*i;
        cout<<n<<"x"<<i<<"="<<product<<endl;
    }
    return 0;
}