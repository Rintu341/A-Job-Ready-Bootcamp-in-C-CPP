// .Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <conio.h>
void Frequency(char a[], int N);
int checkback(char a[], int p);
void inputString(char str[]);
int main()
{
    char a[30];
    inputString(a);
    // int i;
    // for(i=0;a[i];i++);
    //     printf("%c",a[i-1]);// this code show every time when i type a string, \n also added in end of the actual string
    Frequency(a, 30);
    return 0;
}
void Frequency(char a[], int N)
{
    int count;
    for (int i = 0; a[i]!='\n'; i++)
    {
        count = 1;
        if (checkback(a, i) == 0)
        {
            for (int j = i + 1;a[j]!='\n'; j++)
            {
                if (a[i] == a[j])
                    count++;
            }
            // if(a[i]!='\n')// I add this if because of every time \n  
                printf("%c's Frequency is %d\n", a[i], count);
        }
    }
}
int checkback(char a[], int p)//check a number that is already consider
{
    if (p == 0)
        return 0;
    else
    {
        char k = a[p];
        for (int i = p; i >= 0; i--)
        {
            if (k == a[i-1])
                return 1;
        }
        return 0;
    }
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 30, stdin);
}