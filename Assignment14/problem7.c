
#include <stdio.h>
#include <conio.h>
void sorting(int b[],int);
void input(int b[],int );
int main(){
    int n;
    int a[n];
    printf("Enter length of an array : ");
    scanf("%d",&n);
    input(a,n);
    sorting(a,n);
    // for (int i = 0; i <=n-1; i++)
    //  {
    //     printf("%d ",a[i]);
    //  }
    printf("\nSecond lergest element in an array  %d\n",a[n-2]);

    return 0;
}
void sorting(int b[],int N){
    int temp;
    for(int i=0;i<=N-1;i++){
        for (int j = 0; j <=N-1; j++)
        {
            if (b[i]<=b[j])
            {   
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    
}
void input(int b[],int N){
    printf("Enter a numbers: ");
    for(int i=0;i<=N-1;i++)
        scanf("%d",&b[i]);
}

