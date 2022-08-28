#include <stdio.h>
#include <conio.h>

int sumDigit(int n);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int sumdigit;
    sumdigit=sumDigit(k);
    printf("sum of %d even natural is %d",k,sumdigit);
    return 0;
}
int sumDigit(int n){
    if(n>=1)
        return (n%10)+sumDigit(n/10);
}