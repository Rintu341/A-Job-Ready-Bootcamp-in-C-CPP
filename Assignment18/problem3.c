// Write a function to compare two strings.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
int main()
{
    char a[30], b[30];
    inputString(a);
    inputString(b);
    printf("%d ", strcmp(a, b));
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}