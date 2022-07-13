#include <stdio.h>
#include <conio.h>

int main(){
    
    int day,month,year;
    printf("Enter Date Format like DD/MM/YYYY:\n");
    scanf("%d",&day);
    printf("/");
    scanf("%d",&month);
    printf("/");
    scanf("%d",&year);
    printf("Day - %d,Month - %d,Year - %d",day,month,year);
    
    return 0;
}