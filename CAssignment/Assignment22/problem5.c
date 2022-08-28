#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int num,* p,i,sum=0;
    printf("Enter size of an array: ");
    scanf("%d",&num);
    p=(int *)calloc(num,sizeof(int));

    if(p==NULL){
        printf("Memory Allocation Failed \n");
        return 0;
    }
    printf("Enter numbers: \n");
    
    for(i=0;i<num;i++){
        scanf("%d",(p+i));
        sum=sum+p[i];
    }
    printf("Average  %d ",sum);
    free(p);
    return 0;
}