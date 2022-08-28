#include <stdio.h>
#include <conio.h>
void Square(int);
int main(){
    int R;
    printf("Enter a number : ");
    scanf("%d",&R);
    Square(R);

    return 0;
}
void Square(int n){
     if(n>=1){
        Square(n-1);
        printf("%d ",n*n);
    }
}