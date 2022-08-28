#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int num,* p,i,Largest;
    int temp;
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
    for(i=1;i<num;i++){
        if(*(p+0)< *(p+i)){
            temp=*(p+0);
            *(p+0)=*(p+i);
            *(p+i)=temp;
        }
    }
    printf("Lasgest number in an array is %d ",*(p+0));
    return 0;
}