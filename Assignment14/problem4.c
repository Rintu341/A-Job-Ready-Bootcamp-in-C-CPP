#include <stdio.h>
#include <conio.h>
void sorting(int b[]);
void input(int b[]);
int main(){
    int a[10];
    input(a);
    sorting(a);
    printf("\nGreatest number in an array is %d",a[0]);
    return 0;
}
void sorting(int b[]){
    int temp;
        for (int j = 1; j <=9; j++)
        {
            if (b[0]<b[j])
            {
                temp=b[0];
                b[0]=b[j];
                b[j]=temp;
            }
        }
    }
void input(int b[]){
    printf("Enter a numbers: ");
    for(int i=0;i<=9;i++)
        scanf("%d",&b[i]);
}

