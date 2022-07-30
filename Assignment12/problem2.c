#include <stdio.h>
#include <conio.h>
void printRe(int);
int main(){
    int R;
    printf("Enter a number : ");
    scanf("%d",&R);
    printRe(R);
    return 0;
}
void printRe(int n){
    
    if(n>=1){
        printf("%d ",n);
        printRe(n-1);
    }
    
}
