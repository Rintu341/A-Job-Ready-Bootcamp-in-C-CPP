#include <stdio.h>
#include <conio.h>

int main(){
    int Hour,Minute;
    int b;
    printf("Enter Time  format like HH : MM \n");
    scanf("%d %c %d",&Hour,&b,&Minute);    
    printf("%d Hour And %d Minute ",Hour,Minute);
    return 0;
}