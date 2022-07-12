#include <stdio.h>
#include <conio.h>

int main(){
    int a,num;//==>
    printf("Enter Three digit number : ");
    scanf("%d",&num);
    a = num%10;
    num=num/10;
    a+=num%10;//==>find remainder then add in 'a' with previous  a's value 
    num=num/10;
    a+=num%10;
    printf("Sum of Three digit number is = %d",a);
    return 0;
}