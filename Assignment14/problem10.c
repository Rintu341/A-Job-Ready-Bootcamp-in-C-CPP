#include <stdio.h>
#include <conio.h>
void copy(int b[],int,int c[]);
void input(int b[],int );
void printArray(int p[],int);
int main(){
    int n;
    int a[n];
    printf("Enter length of an array : ");
    scanf("%d",&n);
    int c[n];
    input(a,n);
    printf("After copy :");
    printArray(a,n);
    copy(a,n,c);
    printf("\nBefore copy :");
    printArray(c,n);
    return 0;
}
void copy(int b[],int N,int c[]){
    for(int i=0;i<=N-1;i++){
            c[i]=b[i];
    }
}
void input(int b[],int N){
    printf("Enter a numbers: ");
    for(int i=0;i<=N-1;i++)
        scanf("%d",&b[i]);
}
void printArray(int p[],int n){
    printf("\n");
    for (int i = 0; i <=n-1; i++)
        printf("%d ",p[i]);
}

