// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
#include <conio.h>
#include <string.h>
const int Row = 10;
const int column = 20;
void inputString(char Str[][column]);
void sortedString(char Str[][column]);
void printString(char str[][column]);
int main()
{
    char str[Row][column];
    inputString(str);
    sortedString(str);
    printf("Sortted String are : \n");
    printString(str);

    return 0;
}
void inputString(char Str[][column])
{
    printf("Enter 10 city name: \n");
    for (int i = 0; i < Row; i++)
    {
        gets(Str[i]);
    }
}
void sortedString(char Str[][column])
{
    char temp[column];
    for (int i = 0; i < Row - 1; i++)
    {
        for (int j = i + 1; j < Row; j++)
        {
            if (strcmp(Str[j], Str[i]) == 1)
            {
                strcpy(temp, Str[i]);
                strcpy(Str[i], Str[j]);
                strcpy(Str[j], temp);
            }
        }
    }
}

void printString(char str[][column])
{
    for (int i = 0; i < Row; i++)
    {
        printf("%s\n", str[i]);
    }
}
