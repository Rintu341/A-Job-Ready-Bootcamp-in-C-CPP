#include <stdio.h>
#include <conio.h>
void DectoOct(int n);
int main(){
    int Dec;
    printf("Enter a number : ");
    scanf("%d",&Dec);
    printf("%d octal value is ",Dec);
    DectoOct(Dec);
    return 0;
}
void DectoOct(int n){
    if(n>0){
        DectoOct(n/8);
        printf("%d",n%8);
    }
}