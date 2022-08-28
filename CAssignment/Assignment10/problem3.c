#include <stdio.h>
#include <conio.h>
int check_Even_Odd(int);
int main(){
    int N;
    printf("Enter a Number: ");
    scanf("%d",&N);
    int check = check_Even_Odd(N);
    if(check==1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
int check_Even_Odd(int n){
    if(n%2)
        return 0;
    else
        return 1;
}