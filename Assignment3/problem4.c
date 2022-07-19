#include <stdio.h>
#include <conio.h>

int main(){    
    int a;
    float b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a; // integer value assign in float
    b=b/2;// int an float operation result always float
    a=b;// real value assign in int because if a number is odd then it's point value discard only pre point value only store
    printf("%d , %f\n",a,b);
    if(b>a)
        printf("Number is Odd");
    else
        printf("NUmber is Even");    
    
    return 0;
}