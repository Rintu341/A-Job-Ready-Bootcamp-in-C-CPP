#include <stdio.h>
#include <conio.h>
int factorial(int);
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int fact =factorial(N);
    printf("factorial of a number is %d",fact);
    return 0;
}
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
        fact =fact*i;
    
    return fact;
}
