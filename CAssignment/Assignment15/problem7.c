#include <stdio.h>
#include <conio.h>
int duplicate(int a[], int N);
int main()
{
    int a[10] = {40, 23, 56, 13, 78, 40, 28, 23, 45, 23};
    int d;
    d = duplicate(a, 10);
    printf("\n%d", d);
    return 0;
}
int duplicate(int a[], int N)
{
    int p, count = 0, k, h = 0;
    for (int i = 0; i < N; i++)
    {
        k = 0;
        p = i + 1;

        while (p < N)
        {
            if (a[i] == a[p])
            {
                h = p;
                count++;
                break;
            }
            p++;
        }
    }
    return count;
}
