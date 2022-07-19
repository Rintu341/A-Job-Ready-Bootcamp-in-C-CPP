#include <stdio.h>
#include <conio.h>

int main(){
    int times;
    printf("Enter a times to print : ");
    scanf("%d",&times);
    printf("First  %d natural numbers squares is : \n",times);
    for (int i = 1; i <=times; i++)
        printf("%d\n",i*i);
    return 0;
}