#include <stdio.h>
#include <conio.h>
void sumElement(int * ptr,int size,int *sum){
    for(int i=0;i<size;i++){
        (*sum)=(*sum)+ (*ptr+i);
    }
}
int main(){
    int arr[]={23,56,82,34,12,34,76,29,10,25};
    int sum=0;
    sumElement(arr,10,&sum);
    printf("sum of all element = %d",sum);
    return 0;
}