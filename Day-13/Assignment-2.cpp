#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the no. element of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of the element of array is : "<<sum<<endl;
    int avg=sum/n;
    cout<<"The average of element of array is : "<<avg;
    return 0;
}