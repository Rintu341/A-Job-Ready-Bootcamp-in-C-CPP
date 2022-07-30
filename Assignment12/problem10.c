#include <stdio.h>
#include <conio.h>
void reverse(int n);
int main(){
    int rev;
    printf("Enter a number : ");
    scanf("%d",&rev);
    printf("Reverse is ");
    reverse(rev);
    return 0;
}
void reverse(int n){
    if(n>0){
        printf("%d",n%10);
        reverse(n/10);
    }
}