#include <stdio.h>
#include <conio.h>
void odd(int);
int main(){
    int k;
    printf("Enter a number : ");
    scanf("%d",&k);
    odd(k);
    return 0;
}
void odd(int n){
     if(n>=1){
        odd(n-1);
        printf("%d ",2*n-1);

    }
}