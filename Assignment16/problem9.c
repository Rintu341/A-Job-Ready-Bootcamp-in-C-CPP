// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
#include <conio.h>
const int column;
const int Row;
void input(int a[][column]);
int check_sparse(int a[][column]);
int main()
{
    printf("Enter a length of Row and column: ");
    scanf("%d %d", &Row, &column);
    int a[Row][column];
    input(a);
    if (check_sparse(a) > ((Row + column) / 2))
        printf("This is a Sparse matrix\n");
    else
        printf("This is not a Sparse matrix\n");
    return 0;
}
void input(int a[][column])
{
    printf("Enter matrix values: \n");
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int check_sparse(int a[][column])
{
    int count = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }
    return count;
}
