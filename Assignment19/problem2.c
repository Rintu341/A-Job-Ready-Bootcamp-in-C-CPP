// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <conio.h>
#include <string.h>
const int Row = 3;
const int column = 20;
void inputString(char Str[][column]);
void sortedString(char Str[][column]);
void interchangeString(char a[], char b[]);
void printString(char str[][column]);
int main()
{
    char str[Row][column];
    inputString(str);
    sortedString(str);
    printf("Sorting String are: ");
    for (int i = 0;i<Row; i++)
        printf("%s", str[i]);
    // printString(str);
    // ={"sujin","sujan"};
    // int r=strcmp(str[0],str[1]);
    // printf("%d",r);
    return 0;
}
void inputString(char Str[][column])
{
    printf("Enter 10 city name: \n");
    for (int i = 0; i < Row; i++)
    {
        fgets(Str[i], column, stdin);
    }
}
void sortedString(char Str[][column])
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = i + 1; j < column; j++)
        {
            if (strcmp(Str[i], Str[j]) == 1)
            {
                interchangeString(Str[j], Str[i]);
            }
        }
    }
}
void interchangeString(char a[], char b[])
{
    char c[column];
    for (int i = 0; i < column; i++)
    {
        c[i] = b[i];
        b[i] = a[i];
        a[i] = c[i];
    }
}
// void printString(char str[][column])
// {
//     for (int i = 0;i<Row; i++)
//     {
//         printf("%s", str[i]);
//     }
// }
