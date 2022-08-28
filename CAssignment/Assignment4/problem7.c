#include <stdio.h>
#include <conio.h>

int main(){
    int k;
    printf("Enter a times to print : ");
    scanf("%d",&k);
    for (int i = 2*k; i!=0; i--)
    {
        if(!(i%2))
            printf("%d ",i);
    }
    return 0;
}