// Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
#include <conio.h>
const int column;
const int Row;
void input(int a[][column]);
int Maximum_1s(int a[][column]);
int main()
{
    printf("Enter a length of Row and column: ");
    scanf("%d %d", &Row, &column);
    int a[Row][column];
    input(a);
    printf("Mximum 1s in Row[%d]", Maximum_1s(a) + 1);
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
int Maximum_1s(int a[][column])
{
    int count = 0, p, row, i;
    for (i = 0; i < Row; i++)
    {
        p = count;
        count = 0;
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] == 1)
                count++;
        }
        if (count >= p)
            row = i;
    }
    return row;
}