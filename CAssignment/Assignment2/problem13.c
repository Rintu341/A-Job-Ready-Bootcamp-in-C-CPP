#include <stdio.h>
#include <conio.h>

int main(){
    int Three_Digit,remainder;
    printf("Enter Three digit number : ");
    scanf("%d",&Three_Digit);
    remainder=Three_Digit%10;
    Three_Digit =Three_Digit/10;
    Three_Digit=remainder*100 +Three_Digit;
    printf("Digits is : %d",Three_Digit);
    return 0;
}