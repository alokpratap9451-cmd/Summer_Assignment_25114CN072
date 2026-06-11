#include <bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;
    if (isPrime(num)==1)
        cout<<num<<" is a Prime Number";
    else
        cout<<num<<" is not a Prime Number";
    return 0;
}
//completed