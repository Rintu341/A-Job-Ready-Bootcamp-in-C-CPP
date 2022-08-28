#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    printf("Enter a number : "); 
    scanf("%d",&num);
    if (num>0)
        printf("positive");
    else
    {
        if (num<0)
            printf("Negstive");
        else
                printf("Zero");
    }
    return 0;
}