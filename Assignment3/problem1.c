#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    (num<0)?printf("non-positive"):printf("Positive");
    return 0;
}