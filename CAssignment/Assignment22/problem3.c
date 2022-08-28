#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int n,*p,i,sum=0;
    printf("Enter memory size byte: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory Allocation Failed \n");
        return 0;
    }
    printf("Enter numbers\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
        sum=sum+p[i];
    }
    printf("Sum of n numbers is %d ",sum);
    free(p);
    return 0;
}