#include <stdio.h>
#include <conio.h>

int main(){
    int x,y;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);
    printf("After 1st = %d & 2nd = %d\n",x,y);
    x = x + y;
    y=x-y;
    x=x-y;
    printf("Before 1st = %d & 2nd = %d\n",x,y);
    return 0;
}