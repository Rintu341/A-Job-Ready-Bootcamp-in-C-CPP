// Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
void reverseWord(char a[]);
int countWord(char a[]);
int Position(char a[], int p);
int main()
{
    char a[40], temp;
    inputString(a);
    reverseWord(a);
    temp = a[0];
    for (int i = 0; a[i]; i++)
    {
        a[i] = a[i + 1];
    }
    printf("Reverse a string word wise is: ");
    printf("%s", a);
    // printf("%d", '\t'); //==> \t ASCII code 9
    // printf("\n");//=> \n ASCII code is 10
    // printf("%d",a[25]);
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 40, stdin);
}
void reverseWord(char a[])
{
    strrev(a);
    // printf("%c",a[0]);
    int count = countWord(a);
    char temp;
    int R = 1, P, k = 0;
    for (int j = 0; j < count; j++)
    {
        P = Position(a, R);
        // printf("%d\n",P);
        for (int i = R, z = 0; i <= (R + P) / 2; i++, z++)
        {
            temp = a[i];
            a[i] = a[P - z];
            a[P - z] = temp;
        }
        R = P + 2;
        // k=R;
    }
}
int countWord(char a[])
{
    char b[30];
    int r = 0; // for counting
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '\n' || a[i] == 9 || a[i] == 32)
        {
            r++;
        }
    }
    return r;
}
int Position(char a[], int p)
{
    int i;
    for (i = p; a[i] != '\0'; i++)
    {
        if (a[i] == '\n' || a[i] == 9 || a[i] == 32)
        {
            break;
        }
    }
    return i - 1;
}