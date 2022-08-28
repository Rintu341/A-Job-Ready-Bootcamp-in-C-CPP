#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int num,* p,i,Avg=0;
    printf("Enter number of Data value: ");
    scanf("%d",&num);
    p=(int *)calloc(num,sizeof(int));
    if(p==NULL){
        printf("Memory Allocation Failed \n");
        return 0;
    }
    printf("Enter numbers\n");
    for(i=0;i<num;i++){
        scanf("%d",(p+i));
        Avg=Avg+p[i];
    }
    printf("Average  %d ",Avg=Avg/num);
    free(p);
    return 0;
}