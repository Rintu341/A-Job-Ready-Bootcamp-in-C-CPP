#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int n,*p,i;
    printf("Enter size of an Array: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL){
        printf("Memory Allocation Failed \n");
        return 0;
    }
    
    return 0;
}