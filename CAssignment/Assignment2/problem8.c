#include <stdio.h>
#include <conio.h>

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x&1)
        printf("odd\n");
    else
        printf("Even\n");
    return 0;
}