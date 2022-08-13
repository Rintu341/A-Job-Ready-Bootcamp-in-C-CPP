// Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
#include <conio.h>
void sorting(int b[],int n);
void input(int b[],int n);
int main(){
    int n;
    printf("Enter length of an array: ");
    scanf("%d", &n);
    int a[n];
    input(a,n);
    sorting(a,n);
    printf("Sort elements \n");
    for (int i = 0; i <n; i++)
     {
        printf("%d ",a[i]);
     }
    return 0;
}
void sorting(int b[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for (int j = 0; j <n; j++)
        {
            if (b[i]<b[j])
            {   
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    
}
void input(int b[],int n){
    printf("Enter a numbers: ");
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}

