#include <stdio.h>
#include <conio.h>
void swap(int *,int*);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
void swap(int *p,int*q){
    int temp;
    temp =*p;
    *p=*q;
    *q=temp;
}
