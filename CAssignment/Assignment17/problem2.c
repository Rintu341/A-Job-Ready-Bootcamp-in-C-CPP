// Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, count = 0;
    char str[20], ch;
    printf("Enter any String : ");
    // scanf("%s", str); --->worked
    fgets(str, 30, stdin); //-->worked
    // gets(str);--->worked
    // fflush(stdin);----.its only i use  for scanf
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            count++;
            // continue;
        }
    }
    printf("The occurrence of a given character in a given string is %d", count);

    return 0;
}