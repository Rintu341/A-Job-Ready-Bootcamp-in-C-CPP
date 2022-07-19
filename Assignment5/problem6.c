#include <stdio.h>
#include <conio.h>

int main(){
        int times;
    printf("Enter a times to print");
    scanf("%d",&times);
    for (int i = 1; i <=times; i++)
            printf("%d ",2*i);
    return 0;
}