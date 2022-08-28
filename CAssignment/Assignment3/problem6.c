#include <stdio.h>
#include <conio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    if (num1==num2)
        printf(" %d ",num1);
    else
    {
        if(num1>num2)
            printf("%d is greater then %d",num1,num2);
        else
            printf("%d is greater then %d",num2,num1);    
    }
    

    return 0;
}