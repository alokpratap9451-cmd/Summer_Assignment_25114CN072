#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of element : ";
    cin>>n;
    cout<<" enter the element : ";
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=0;
    largest=arr[i];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
      cout<<"the largest array is "<<largest;  
    return 0;
}
//completed