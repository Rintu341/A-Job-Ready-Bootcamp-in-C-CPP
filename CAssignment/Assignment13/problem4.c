#include <stdio.h>
#include <conio.h>

int sumSquare(int n);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int sumsquare;
    sumsquare=sumSquare(k);
    printf("sum of %d even natural is %d",k,sumsquare);
    return 0;
}
int sumSquare(int n){
    if(n>1)
        return (n*n)+sumSquare(n-1);
}