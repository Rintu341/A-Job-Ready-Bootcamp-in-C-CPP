#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    switch(n>=0){

        case 1:
                n=(-n*2)+n;
                printf(" %d ",n);
            break;
        case 0:
                n=(n*-2)/2;
                printf("+%d",n);
            break;
        default :
                printf("Invalid Input");
            break;
    }
    return 0;
}