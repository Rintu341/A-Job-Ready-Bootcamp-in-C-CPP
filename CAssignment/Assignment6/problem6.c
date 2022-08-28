#include <stdio.h>
#include <conio.h>

int main(){
    int sum=1,N;
    printf("Enter a Numner: ");
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
            sum=sum*(N-i);

    printf("Factorial of a number %d is %d",N,sum);
    return 0;
}