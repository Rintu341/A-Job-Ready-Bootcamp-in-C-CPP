#include <stdio.h>
#include <conio.h>

int main(){
    int sum=0,N;
    printf("Enter a number: ");
    scanf("%d",&N);
    for (int i = 1; i <= 2*N; i+=2)
        sum =sum+i;
    
    printf("First %d Odd natural numbers sum is %d ",N,sum);
    return 0;
}