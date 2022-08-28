#include <stdio.h>
#include <conio.h>

int sumEven(int n);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int sumeven;
    sumeven=sumEven(k);
    printf("sum of %d even natural is %d",k,sumeven);
    return 0;
}
int sumEven(int n){
    if(n>1)
        return (2*n)+sumEven(n-1);
}