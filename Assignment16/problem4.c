// Write a program in C to find the sum of right diagonals of a matrix
#include <stdio.h>
#include <conio.h>
const int Row = 3;
const int column = 3;
int right_diagonals(int a[][column]);
void display(int b[][column]);
int main()
{
    int a[][3] = {{2, 5, 7}, {3, 4, 8}, {9, 6, 10}};
    display(a);

    int sum = right_diagonals(a);
    printf("sum of right diagonals of a matrix is %d", sum);
    printf("\n");
    return 0;
}

int right_diagonals(int a[][column])
{
    int sum = 0;
    for (int i = 0; i < Row; i++)
    {
        sum = sum + a[i][2-i];
    }
    return sum;
}
void display(int b[][Row])
{
    printf("Matrix is : \n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < Row; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
}