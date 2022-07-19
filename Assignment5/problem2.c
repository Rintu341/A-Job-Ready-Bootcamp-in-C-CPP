#include <stdio.h>
#include <conio.h>

int main(){
    int times;
    printf("Enter a number  : \n");
    scanf("%d",&times);
    printf("First %d natural numbers is : \n",times);

    for (int i = 1; i <=times; i++)
    {
        printf("%d\n",i);
    }    
    return 0;
}