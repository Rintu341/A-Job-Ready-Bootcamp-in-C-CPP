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
    printf("First %d Natural number is \n");
    for (int i = 1; i <=N; i++)
        printf(" %d",i);
}