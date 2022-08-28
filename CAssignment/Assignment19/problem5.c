#include <stdio.h>
#include <conio.h>
#include <string.h>
const int column = 40;

void inputString(char Str[][column], int Row)
{
    int i;
    printf("Enter Emails : \n");
    for (i = 0; i < Row; i++)
    {   
        fgets(Str[i],column, stdin);
        if (column-1 > strlen(Str[i]))
            *(Str[i] + (strlen(Str[i]) - 1)) = '\0';
    }
}
void checkEmail(char str[][column], int Row)
{
    int i,j;
    int k;
    for (i = 0; i < Row; i++)
    {
            if(strchr(str[i],'@')==0)
                printf("%s \n",str[i]);
    }
}
int main()
{
    int Row;
    scanf("%d", &Row);
    fflush(stdin);
    char str[Row][column];
    inputString(str, Row);
    printf("Invalid emails are \n");
    checkEmail(str, Row);

    return 0;
}