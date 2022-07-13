#include <stdio.h>
#include <conio.h>

int main(){
    int Hour,Minute;
    printf("Enter Time  format like HH : MM \n");
    scanf("%d",&Hour);
    printf(":");
    scanf("%d",&Minute);
    
    printf("%d Hour And %d Minute ",Hour,Minute);
    return 0;
}