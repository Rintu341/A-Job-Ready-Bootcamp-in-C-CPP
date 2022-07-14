#include <stdio.h>
#include <conio.h>

int main(){
    
    int day,month,year;
    char c ;
    printf("Enter Date Format like DD/MM/YYYY:\n");
    scanf("%d %c %d %c %d",&day,&c,&month,&c,&year);   
    printf("Day - %d,Month - %d,Year - %d",day,month,year);    
    return 0;
}