// Write a function to calculate length of the string
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
int main(){
    char a[30];
    inputString(a);
    printf("Length of the String is %d",strlen(a));
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}