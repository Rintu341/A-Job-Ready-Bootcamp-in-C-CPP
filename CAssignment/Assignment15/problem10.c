// Write a function in C to count the frequency of each element of an array.
// .Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <conio.h>
const int n=10;
void Frequency(int a[]);
int checkback(int a[],int p);
void inputArray(int str[]);
int main()
{
    int a[30];
    inputArray(a);
    Frequency(a);
    return 0;
}
void Frequency(int a[])
{
    int count;
    for (int i = 0; i<n; i++)
    {
        count = 1;
        if (checkback(a, i) == 0)
        {
            for (int j = i + 1;j<n; j++)
            {
                if (a[i] == a[j])
                    count++;
            }
                printf("%d's Frequency is %d\n", a[i], count);
        }
    }
}
int checkback(int a[],int p)//check a number that is already consider
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
void inputArray(int str[])
{
    printf("Enter Numbers: ");
    for(int i=0;i<n;i++)
        scanf("%d",&str[i]);
}