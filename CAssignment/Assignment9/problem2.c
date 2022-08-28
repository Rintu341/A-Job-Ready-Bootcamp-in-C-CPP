#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int num1,num2;
    char c;

    while(1){
    printf("\na. Addition");
    printf("\nb. Subtraction ");
    printf("\nc. Multiplication ");
    printf("\nd. Division ");
    printf("\ne. Exit ");
    printf("\nEnter your choice : ");
    fflush(stdin);
    scanf("%c",&c);
    printf("Enter  two number : ");    
    scanf("%d %d",&num1,&num2);
    switch (c)
    {
    case 'a':
        printf("\nAddition result = %d",num1+num2);
        break;
    case 'b':
        printf("\nSubtraction result = %d",num1-num2);
        break;
    case 'c':
        printf("\nMultiplication result = %d",num1*num2);
        break;
    case 'd':
        printf("\nDivision result = %d",num1/num2);
        break;
    case 'e':
        exit(0);
        break; 
    default:
        printf("Invalid choice\n");
        break;
        }
    }
    return 0;
}