
#include <stdio.h>
#include <conio.h>
void reverse(int b[],int);
void input(int b[],int );
int main(){
    int n;
    int a[n];
    printf("Enter length of an array : ");
    scanf("%d",&n);
    input(a,n);
    reverse(a,n);
    printf("In reverse order \n");
    for (int i = 0; i <=n-1; i++)
     {
        printf("%d ",a[i]);
     }

    return 0;
}
void reverse(int b[],int N){
    int temp,k=N-1;
    for(int i=0;i<N/2;i++){
                temp=b[i];
                b[i]=b[k-i];
                b[k-i]=temp;
    }
    
}
void input(int b[],int N){
    printf("Enter a numbers: ");
    for(int i=0;i<=N-1;i++)
        scanf("%d",&b[i]);
}

