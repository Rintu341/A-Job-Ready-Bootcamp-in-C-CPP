#include <stdio.h>
#include <conio.h>
void Natural(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Natural(n);
    return 0;
}
void Natural(int N){
    printf("First %d odd Natural number is \n");
    for (int i = 1; i <2*N; i+=2)
        printf(" %d",i);
}