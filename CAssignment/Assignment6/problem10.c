#include <stdio.h>
#include <conio.h>

int main(){
    int N,s=0,reverse=0;
    printf("Enter a Number : ");
    scanf("%d",&N);
    while (N!=0)
    {
        s=N%10;
        reverse=reverse*10+s;
        N=N/10;
    }
    printf("Reverse number is : %d",reverse);
    
    return 0;
}