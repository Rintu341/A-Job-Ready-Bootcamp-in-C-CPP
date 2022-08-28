#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (!(num%3)&&!(num%2))
        printf("The numbers is divisible by 3 & divisible by 2");
    else{
        if (!(num%2))
            printf("The numbers divisible by 2");
        else{
            if(!(num%3))
                printf("The numbers divisible by 3");
            else
                printf("The numbers is not divisible by 3 & not divisible by 2");
        }       
    }
    
    return 0;
}