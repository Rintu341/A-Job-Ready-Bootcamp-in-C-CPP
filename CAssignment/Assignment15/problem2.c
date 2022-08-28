// Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
#include <conio.h>
int smallest(int a[], int n);
int main()
{
    int n;
    printf("Enter length of an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    printf("smallest number in array is %d",smallest(a,n));
    return 0;
}
int smallest(int a[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        if (a[0] > a[i])
        {
            temp = a[i];
            a[i] = a[0];
            a[0] = temp;
        }
    }
    return a[0];
}