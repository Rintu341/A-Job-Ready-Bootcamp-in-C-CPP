// Write a function in C to merge two arrays of the same size sorted in descending order
#include <stdio.h>
#include <conio.h>
void marge(int a[], int b[], int c[]);
int main()
{
    int a[]={2,5,7,8,11};
    int b[]={6,13,15,17,19};
    int c[10];
    marge(a,b,c);
    printf("Marge array :\n");
    for(int i=0;i<10;i++)
        printf("%d ",c[i]);
    return 0;
}
void marge(int a[], int b[], int c[])
{
    int i = 0, j = 0, k = 0;
    while (k < 10)
    {
        if (a[i] >= b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
}
