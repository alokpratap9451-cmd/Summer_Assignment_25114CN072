#include <stdio.h>


int main(){
    int count, sum=0;
    printf("Enter n: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    
}