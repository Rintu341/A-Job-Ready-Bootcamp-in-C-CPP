#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,*p,*q;
    printf("Enter twoo numbers ");
    scanf("%d %d",&a,&b);
    p=&a,q=&b;
    
    if(*p>*q)
        printf("maximum number is %d",*p);
    else
        printf("maximum number is %d",*q);

    return 0;
}