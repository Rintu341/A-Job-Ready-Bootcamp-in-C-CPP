#include <stdio.h>
#include <conio.h>

int Number_of_digit(int);
int main(){
    int N,digit;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Enter digti to check: ");
    scanf("%d",&digit);
    int check =Number_of_digit(N);
    if (check==digit)
        printf("A given number contains a given digit");
    else
        printf("A given number do not contains a given digit");
    
    return 0;
}
int Number_of_digit(int n){
    int count=0;
    while (n!=0)
    {
        n=n/10;
        count ++;
    }
    return count;


}
