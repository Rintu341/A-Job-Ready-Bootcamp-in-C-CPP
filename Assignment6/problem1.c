#include <stdio.h>
#include <conio.h>

int main(){
    int N,sum=0;
    printf("Enter a number\n");
    scanf("%d",&N);
    for (int i = 1; i <=N; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}