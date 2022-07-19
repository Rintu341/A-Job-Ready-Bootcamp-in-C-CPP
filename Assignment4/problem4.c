#include <stdio.h>
#include <conio.h>

int main(){
    int times;
    printf("Enter a times to print");
    scanf("%d",&times);
    for (int i = 1; i <=2*times; i++)
    {
        if(i%2)
            printf("%d ",i);
    }
    
    return 0;
}