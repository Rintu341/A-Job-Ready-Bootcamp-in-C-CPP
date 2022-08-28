#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : "); 
    scanf("%d",&num);
    if (!(num%7))
        printf("Number is divisible by 7");
    else
    {
        if (!(num%3))
            printf("Number is divisible by 3");
        else
                printf("The numbers is not divisible by 7 & not divisible by 3");
    }
    
    return 0;
}