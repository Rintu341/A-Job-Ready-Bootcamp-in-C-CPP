#include <stdio.h>
#include <conio.h>
void reverse(int a[], int);
void input(int b[], int N);
void display(int a[], int n);
int main()
{
    int n;
    printf("Enter length of an Array: ");
    scanf("%d", &n);
    int a[n];
    input(a, n);
    printf("After reverse ");
    display(a, n);
    reverse(a, n);
    printf("Before reverse ");
    display(a, n);
    return 0;
}
void reverse(int a[], int n)
{
    int k = n / 2, temp, p = n - 1;
    for (int i = 0; i < k; i++, p--)
    {
        temp = a[i];
        a[i] = a[p];
        a[p] = temp;
    }
}
void input(int b[], int N)
{
    printf("Enter a numbers: ");
    for (int i = 0; i <= N - 1; i++)
        scanf("%d", &b[i]);
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
