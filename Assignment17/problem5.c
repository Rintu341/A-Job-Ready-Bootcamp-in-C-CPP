// Write a program to convert a given string into lowercase
#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char str[20];
    printf("Enter any String : ");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

    // str[0]+=32;
    printf(" In Uppercase %s", str);
    return 0;
}