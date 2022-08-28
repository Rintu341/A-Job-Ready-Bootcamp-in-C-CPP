#include <stdio.h>
#include <conio.h>

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    int result=0,count=0;
    while (x!=0)
    {
        result = x&1;
        count++;
        if(result==1){
            printf("First 1 find in %d position\n", count);
            break;
        }
        x=x>>1;
    }    
    return 0;
}