#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int arr[n];
    cout<<"enter the number of element : ";
    cin>>n;
    cout<<"Enter the element:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            evensum+=arr[i];
        }
        else {
            oddsum+=arr[i];
        }
    }
    cout<<"the sum of even element is : "<<evensum<<endl;
    cout<<"the sum of odd element is : "<<oddsum<<endl;
}