#include <stdio.h>
#include <conio.h>

int main(){
    int N,count=0;
    printf("Enter a number\n");
    scanf("%d",&N);
    while (N!=0)
    {
        N=N/10;
        count++;
    }
    printf("Digits in given Number is  %d",count);
     
    return 0;
}