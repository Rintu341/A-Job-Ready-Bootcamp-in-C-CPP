#include <stdio.h>
#include <conio.h>
void oddR(int);
int main(){
    int R;
    printf("Enter a number : ");
    scanf("%d",&R);
    oddR(R);

    return 0;
}
void oddR(int n){
     if(n>=1){
        printf("%d ",2*n-1);
        oddR(n-1);

    }
}