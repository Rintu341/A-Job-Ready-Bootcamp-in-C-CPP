#include <stdio.h>
#include <conio.h>
void reverseElement(int * ptr,int size){
    for(int i=size-1;i>=0;i--)
        printf("%d ",*(ptr+i));
}
int main(){
    int arr[]={23,56,82,34,12,34,76,29,10,25};
    printf("Eelment in reverse order : \n");
    reverseElement(arr,10);
    return 0;
}