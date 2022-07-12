#include <stdio.h>
#include <conio.h>

int main(){
    int number,unit_digit;
    printf("Enter the number\n");//Units digit of a number is the digit in the one's place of the number. i.e It is the rightmost digit of the number. For example, the units digit of 243 is 3, the units digit of 39 is 9.
    scanf("%d",&number);
    unit_digit=number%10;
    printf("unit digit of a given number is : %d\n",unit_digit);

    return 0;
}