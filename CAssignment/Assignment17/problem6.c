// Write a program to reverse a string.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void reverse(char str[]);
void inputString(char str[]);
int main()
{
    char str[20];
    inputString(str);
    reverse(str);
    printf("%s", str);
    return 0;
}
void reverse(char str[])
{
    char temp;
    int p;
    for (p = 0; str[p]; p++)
        ;
    // printf("%d",p);
    int n = p / 2;
    for (int i = 0; i < n; i++, p--)
    {
        temp = str[i];
        str[i] = str[p - 1];
        str[p - 1] = temp;
    }
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 20, stdin);
}