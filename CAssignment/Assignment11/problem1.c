//Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
#include <conio.h>
int LCM(int,int);
int main(){
    int num1,num2;
    printf("Enter two number to find lcm: ");
    scanf("%d %d",&num1,&num2);
    int lcm=LCM(num1,num2);
    printf("LCM of %d and %d is %d ",num1,num2,lcm);
    return 0;
}
int LCM(int n,int m){
    int i= n>m?m:n;
    while (1)
    {
        if(i%n==0 && i%m==0) // when  i divisiable by both n or m then it return
            return i;   
        else
            i=i+n;    // I value increse by every time i+n that is sappose n=12 then i =12,24 36 48 so on 
    }
}