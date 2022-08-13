// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char cityname[][10]);
int main()
{
    int count, i;
    char city_name[5][10];
    inputString(city_name);
    printf("5 city names is\n");
    for (int p = 0; p < 5; p++)
    {
        printf("%s", city_name[p]);
        printf("\n");
    }
    for (int k = 0; k < 5; k++)
        strupr(city_name[k]);

    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; city_name[i][j]; j++)
            if (city_name[i][j] == 'A' || city_name[i][j] == 'E' || city_name[i][j] == 'I' || city_name[i][j] == 'O' || city_name[i][j] == 'U')
                count++;
        printf("%d string have %d vowels\n", i + 1, count);
    }
    return 0;
}
void inputString(char cityname[][10])
{
    printf("Enter 5 city name: ");
    for (int i = 0; i < 5; i++)
    {
        gets(cityname[i]);
    }
}