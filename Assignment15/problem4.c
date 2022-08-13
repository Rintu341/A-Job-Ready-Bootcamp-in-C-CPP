#include <stdio.h>
#include <conio.h>
void rotate(int a[], int N);
void input(int b[], int N);
int main()
{
    int N;
    printf("Enter length of an array: ");
    scanf("%d", &N);
    int a[N];
    input(a, N);
    rotate(a, N);
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}
void rotate(int a[], int N)
{
    char d;
    int n, i, temp;
    fflush(stdin);
    printf("Enter position : ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Choose direction  left(l) or right(r): ");
    scanf("%c", &d);
    if (d == 'l')
    {
        for (i = 0; i < n; i++)
        {
            temp = a[0]; // alwayes assign first value because that first element shift to end
            for (int j = 0; j < N - 1; j++)
            {
                a[j] = a[j + 1]; // shifting values
            }
            a[N - 1] = temp; //=>move first value in  list index
        }
    }
    else//=> one thing i notice that in both left or right rotation result are always same
    {
        if (d == 'r')
        {
            for (i = N - 1; i >= n; i--)
            {
                temp = a[N - 1];
                for (int j = N - 1; j > 0; j--)
                {
                    a[j] = a[j - 1];
                }
                a[0] = temp;
            }
        }
        else
            printf("Invalid choice\n");
    }
}
void input(int b[], int N)
{
    printf("Enter a numbers: ");
    for (int i = 0; i <= N - 1; i++)
        scanf("%d", &b[i]);
}
