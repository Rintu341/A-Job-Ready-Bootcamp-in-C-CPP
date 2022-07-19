#include <stdio.h>
#include <conio.h>

int main(){
    int times;
    printf("Enter a number  : \n");
    scanf("%d",&times);
    printf("First %d natural  numbers in reverse order : \n",times);

    for (int i = times; i!=0; i--)
    {
        printf(" %d",i);
    }
    
    return 0;
}