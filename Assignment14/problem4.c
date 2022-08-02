#include <stdio.h>
#include <conio.h>
void sorting(int b[]);
void input(int b[]);
int main(){
    int a[10];
    input(a);
    sorting(a);
    printf("\nGreatest number in an array is %d",a[9]);
    return 0;
}
void sorting(int b[]){
    int temp;
    for(int i=0;i<=9;i++){
        for (int j = 0; j <=9; j++)
        {
            if (b[i]<=b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }//else{
            //     temp=b[j];
            //     b[j]=b[i];
            //     b[i]=temp;
                
            // }
        }
    }
    
}
void input(int b[]){
    printf("Enter a numbers: ");
    for(int i=0;i<=9;i++)
        scanf("%d",&b[i]);
}

