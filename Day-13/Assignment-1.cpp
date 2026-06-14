#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, arr[n];
    cout<<"Enter the no. element of array ";
    cin>>n;
    cout<<"Enter the element of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}