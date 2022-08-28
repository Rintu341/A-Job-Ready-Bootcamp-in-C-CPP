#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void hash(int key, int *arr)
{
    (*(arr + key))++;
}
int main()
{
    int i, length;
    char *str;
    scanf("%d", &length);
    fflush(stdin);
    str = (char *)malloc(length * sizeof(char));
    fgets(str, length, stdin);
    printf("%s",str);
    if (length > strlen(str))
        *(str + (strlen(str) - 2)) = '\0';

    int arr[58] = {0};
    for (i = 0; *(str + i); i++)
    {
        if (*(str + i) >= '0' && *(str + i) <= '9')
            hash(*(str + i), arr);
    }
    int j;
    for (j = 48; j < 58; j++)
    {
        printf("%d ", *(arr + j));
    }

    return 0;
}