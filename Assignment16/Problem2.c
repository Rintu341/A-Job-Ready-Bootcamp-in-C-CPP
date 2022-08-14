// Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
#include <conio.h>
const int m = 3;
void ProductMatrix(int a[][m], int b[][m], int c[][m], int n);
void printTwoDArray(int c[][m], int n);
int main()
{
    int a[][3] = {{3, 4, 1}, {
                                 2,
                                 3,
                                 4,
                             },
                  {5, 6, 2}};
    int b[][3] = {{1, 3, 2}, {
                                 6,
                                 5,
                                 4,
                             },
                  {3, 4, 7}};
    int c[3][3];
    ProductMatrix(a, b, c, 3);
    printf("Product is: \n");
    printTwoDArray(c, 3);
    return 0;
}
void ProductMatrix(int a[][m], int b[][m], int c[][m], int n)
{
    int sum;
    for (int i = 0, k = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            for (int k = 0; k < m; k++){
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
    }
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