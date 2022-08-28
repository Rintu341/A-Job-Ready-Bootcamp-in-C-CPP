#include <stdio.h>
#include <conio.h>
int HCF(int,int);
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int hcf=HCF(num1,num2);
    printf("Hcf of %d and %d is %d ",num1,num2,hcf);
    return 0;
}
int HCF(int n,int m){
     int N=((n>m)?n:m)/2;

    for (int i = N; i!= 0;i--)
        if (n%i==0 && m%i==0)
            return i;
}