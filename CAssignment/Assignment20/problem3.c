#include <stdio.h>
#include <conio.h>
void sort(int *p,int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(*(p+i)>*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}
int main(){
    int str[]={12,4,6,7,3,8,2,45,5,10};
    
    sort(str,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*(i+str));
    }
    
    return 0;
    return 0;
}
