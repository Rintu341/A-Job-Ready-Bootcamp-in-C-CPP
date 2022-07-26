#include <stdio.h>
#include <conio.h>

int main(){
    int N;
    printf("Enter a number: "); 
    scanf("%d",&N);
    switch (N%2==0)
    {
    case 1:
        printf("Upper nearest odd number is %d",N=(N+1));
        break;
    case 0:
        printf("Upper nearest odd number is %d",N);
        break;
    default:
        printf("Invalid Number");
        break;
    }
    return 0;
}