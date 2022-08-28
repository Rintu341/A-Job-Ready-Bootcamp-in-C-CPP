// Write a function to reverse a string
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
int main()
{
    char a[30];
    inputString(a);
    strrev(a);
    printf("%s", a);
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}