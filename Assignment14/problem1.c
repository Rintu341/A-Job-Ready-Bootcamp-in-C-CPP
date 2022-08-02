#include <stdio.h>
#include <conio.h>
void input(int b[]);
int sum(int c[]);
int main(){
    int a[10];
    input(a);
    int k=sum(a);
    printf("sum of the number is %d",k);
    return 0;
}
int sum(int c[]){
    int sum=0;
    for(int i=0;i<=9;i++)
        sum=sum+c[i];
    return sum;
}
void input(int b[]){
    printf("Enter a number: ");
    for(int i=0;i<=9;i++)
        scanf("%d",&b[i]);
}