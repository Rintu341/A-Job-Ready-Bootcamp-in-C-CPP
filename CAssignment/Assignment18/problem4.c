// Write a function to transform string into uppercase
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
int main()
{
    char a[30];
    inputString(a);
    printf("%s", strupr(a));
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}