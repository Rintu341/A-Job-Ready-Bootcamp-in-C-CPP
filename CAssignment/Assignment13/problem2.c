#include <stdio.h>
#include <conio.h>

int sumodd(int n);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int sumODD;
    sumODD=sumodd(k);
    printf("sum of %d odd natural is %d",k,sumODD);
    return 0;
}
int sumodd(int n){
    if(n>1)
        return (2*n-1)+sumodd(n-1);
}