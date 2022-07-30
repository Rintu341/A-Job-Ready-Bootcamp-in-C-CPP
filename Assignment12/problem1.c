#include <stdio.h>
#include <conio.h>
void PrintNatural(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    PrintNatural(n);
    return 0;
}
void PrintNatural(int n){
    if(n>=1){
    PrintNatural(n-1);
    printf("%d ",n);
    }
}