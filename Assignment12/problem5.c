#include <stdio.h>
#include <conio.h>
void even(int);
int main(){
    int R;
    printf("Enter a number : ");
    scanf("%d",&R);
    even(R);

    return 0;
}
void even(int n){
     if(n>=1){
        even(n-1);
        printf("%d ",2*n);

    }
}