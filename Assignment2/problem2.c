#include <stdio.h>
#include <conio.h>

int main(){
    int number,number_without_Last_digit;
    printf("Enter the number\n");
    scanf("%d",&number);
    number_without_Last_digit=number/10;
    printf("A given number without its last digit is : %d\n",number_without_Last_digit);
    
    return 0;
}