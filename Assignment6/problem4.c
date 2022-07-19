#include <stdio.h>
#include <conio.h>

int main(){
    int N,sum=0;
    printf("Enter a times to print : ");
    scanf("%d",&N);
    for (int i = 1; i <=N; i++)
            sum=sum+i*i;
    printf("Sum of Square of First %d Natural numbers Is %d",N,sum);

    return 0;
}