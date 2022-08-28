// Write a program in C to count the digits of a given number using recursion
#include <stdio.h>
#include <conio.h>

int countDigit(int n);
int main(){
    int k;
    printf("Enter a number: ");
    scanf("%d",&k);
    int countdigit;
    
    countdigit=countDigit(k);
    printf("no of digit in given number  %d",countdigit);
    return 0;
}
int countDigit(int n){
    if(n==0)
        return 0;
    else{
        int p=1;
        return p+countDigit(n/10);
    }

}