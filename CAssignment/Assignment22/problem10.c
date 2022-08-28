#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int num,* p,i,max,min;
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
    }
    for(int j=0;j<num;j++){
        if
    }
    return 0;
}