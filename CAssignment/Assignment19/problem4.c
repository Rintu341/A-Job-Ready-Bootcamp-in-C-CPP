#include <stdio.h>
#include <conio.h>
#include <string.h>
const int column = 20;

void inputString(char Str[][column], int Row)
{
    int i;
    printf("Enter Strings : \n");
    for (i = 0; i < Row; i++)
    {   
        // printf("\n%d ",i);
        fgets(Str[i],column, stdin);
        if (column-1 > strlen(Str[i]))
            *(Str[i] + (strlen(Str[i]) - 1)) = '\0';
    }
}
void search(char str[][column], int Row)
{
    char Fs[column];
    int i;
    printf("Enter find String: ");
    fgets(Fs, column, stdin);
    if (column-1 > strlen(Fs))
            *(Fs + (strlen(Fs) - 1)) = '\0';
    // printf("%s",Fs);
    for (i = 0; i < Row; i++)
    {
        if (strcmp(Fs,str[i]) == 0)
            break;
    }
    // printf("\n%d", i);
    printf("Searching String is %s in index %d ", str[i], i+1);
}
int main()
{
    int Row;
    scanf("%d", &Row);
    fflush(stdin);
    char str[Row][column];
    inputString(str, Row);
    search(str, Row);

    return 0;
}