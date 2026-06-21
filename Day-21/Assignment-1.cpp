#include <iostream>
using namespace std;
int main(){
    char str[12];
    int len=0;
    cout<<"Enter the string : ";
cin.getline(str,12);
for(int i=0;i<str[i]!='\0';i++){
    len++;
}
cout<<"length of string : "<<len<<endl;
return 0;
}