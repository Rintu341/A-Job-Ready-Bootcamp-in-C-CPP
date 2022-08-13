// Write a program to count vowels in a given string
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i, count = 0;
    char str[20];
    printf("Enter any String : ");
    fgets(str, 20, stdin); //==>store only (n-1) character in an array and one fill with '\0'
    strupr(str);           // ==> into uppercase
    // printf("%s",str);
    for (i = 0; str[i]; i++)
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;

    printf("Vowels in a given string %d", count);

    return 0;
}