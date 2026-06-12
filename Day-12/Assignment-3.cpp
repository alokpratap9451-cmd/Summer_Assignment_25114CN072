#include <bits/stdc++.h>
using namespace std;
void fibonacci(int n) {
    int first=0,second=1,temp;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout <<first<< " ";
        temp = first+second;
        first= second;
        second=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    fibonacci(n);
    return 0;
}
//completed