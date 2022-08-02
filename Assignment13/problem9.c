#include <stdio.h>
#include <conio.h>

int sumDigit(int n,int p);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int couuntdigit;
    int p;
    couuntdigit=sumDigit(k,p);
    printf("sum of %d even natural is %d",k,couuntdigit);
    return 0;
}
int sumDigit(int n,int p){
    if(n>=1)
    return sumDigit(n/10,++p);
    return p;
}