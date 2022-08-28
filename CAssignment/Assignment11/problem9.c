#include <stdio.h>
#include <conio.h>
int Square(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Square of  %d is %d",n,Square(n));
        return 0;
}
int Square(int n){
    return n*n;
}