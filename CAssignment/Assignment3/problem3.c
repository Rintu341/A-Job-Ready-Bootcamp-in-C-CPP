#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    (num%2)?printf("Number is odd"):printf("Number is even");
    return 0;
}