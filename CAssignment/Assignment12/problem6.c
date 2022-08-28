#include <stdio.h>
#include <conio.h>
void evenR(int);
int main(){
    int R;
    printf("Enter a number : ");
    scanf("%d",&R);
    evenR(R);

    return 0;
}
void evenR(int n){
     if(n>=1){
        printf("%d ",2*n);
        evenR(n-1);
    }
}