#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the no. of rows : ";
    cin>>n;

    for(int i=0; i<n;i++) {

        // Spaces
        for (int j=1;j<n-i;j++) {
            cout<<" ";
        }
        // Ascending letters
        char ch='A';
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        // Descending letters
        for(int j=i-1;j>=0;j--){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
    return 0;
}