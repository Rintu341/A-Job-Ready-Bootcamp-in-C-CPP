#include <stdio.h>
#include <conio.h>
#include <string.h>
const int column = 40;

void inputString(char Str[][column], int Row)
{
    int i;
    printf("Enter Strings : \n");
    for (i = 0; i < Row; i++)
    {
        fgets(Str[i], column, stdin);
        if (column - 1 > strlen(Str[i]))
            *(Str[i] + (strlen(Str[i]) - 1)) = '\0';
    }
}
void checkPalindrome(char str[][column], int Row)
{   char str2[column];
    int i, j;
    for (i = 0; i < Row; i++)
    {   
        strcpy(str2,str[i]);
        strrev(str2);
        if (strcmp(str2,str[i])==0)
        {
            printf("%s \n", str[i]);
        }
    }
}
int main()
{
    int Row;
    scanf("%d", &Row);
    fflush(stdin);
    char str[Row][column];
    inputString(str, Row);
    printf("Palindrome  String  are \n");
    checkPalindrome(str, Row);

    return 0;
}