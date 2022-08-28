#include <stdio.h>
#include <conio.h>
#include<string.h>
void reverseString(char *ptr, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if(*(ptr+i)!='\n')
            printf("%c",*(ptr+i));
    }
}
int main()
{
    char str[30];
    printf("Enter a  String\n");
    fgets(str, 30, stdin);
    printf("String in reverse order : \n");
    reverseString(str,strlen(str));
    return 0;
}