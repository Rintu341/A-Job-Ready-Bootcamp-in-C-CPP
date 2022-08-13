#include <stdio.h>
#include <conio.h>
int adjacent_duplicate(int a[], int);
void input(int b[], int N);
int main()
{
    int n;
    printf("Enter length of an Array: ");
    scanf("%d", &n);
    int a[n];
    input(a, n);
    int k;
    k = adjacent_duplicate(a, n);
    if (k == 0)
        printf("Adjacent duplicate value not found");
    else
        printf("Adjacent duplicate  value is %d", k);
    return 0;
}
int adjacent_duplicate(int a[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (a[i] == a[i + 1])
            return a[i];
        else
            continue;
    }
    return 0;
}
void input(int b[], int N)
{
    printf("Enter a numbers: ");
    for (int i = 0; i <= N - 1; i++)
        scanf("%d", &b[i]);
}
