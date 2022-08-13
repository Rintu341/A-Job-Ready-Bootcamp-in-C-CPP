// Write a program to calculate the sum of two matrices each of order 3x3.
//  Write a program to calculate the sum of two matrices each of order 3x3
#include <stdio.h>
#include <conio.h>
const int m = 3;
void sumMatrix(int a[][m], int b[][m], int c[][m], int n);

void printTwoDArray(int c[][m], int n);
int main()
{
    int a[][3] = {{1, 2, 10}, {4, 7, 6}, {12, 8, 9}};
    int b[][3] = {{6, 9, 6}, {3, 7, 8}, {10, 2, 5}};
    int c[3][3];
    int n = 3;
    sumMatrix(a, b, c, n);
    printf("\n");
    printf("Sum of two matrix is :\n");
    printTwoDArray(c, n);
    return 0;
}
void printTwoDArray(int c[][m], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
void sumMatrix(int a[][m], int b[][m], int c[][m], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
