// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include <stdio.h>
#include <conio.h>
void inputString(char str[]);
int main()
{
    char str[30];
    inputString(str);
    int i, digit = 0, alphabet = 0, special = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            alphabet++;
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                alphabet++;
            else
            {
                if (str[i] >= '0' && str[i] <= '9')
                    digit++;
                else
                    special++;//this is the reason
            }
        }
    }
    printf("Alphabet  = %d,special character = %d,digit = %d", alphabet, special-1, digit);// I write special -1 because of it consider also new line character by  last else
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 20, stdin);
}