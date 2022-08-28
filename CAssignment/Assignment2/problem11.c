#include <stdio.h>
#include <conio.h>

int main(){
    int number, digit;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Enter a digit : ");
    scanf("%d",&digit);
    printf("The number Now is : %d",number =(number*10)+digit);
    return 0;
}