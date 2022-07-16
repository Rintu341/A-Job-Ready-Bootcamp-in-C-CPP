#include <stdio.h>
#include <conio.h>

int main(){
    int year;
    printf("Enter the  year : ");
    scanf("%d",&year);
    (year%4)?printf("This year is not leap year"):printf("This year is leap year");
    return 0;
}