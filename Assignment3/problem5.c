#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num>99 && num<1000)
        printf("It is a Three digit number\n");
    else
        printf("It is not a Three digit number\n");    
    return 0;
}