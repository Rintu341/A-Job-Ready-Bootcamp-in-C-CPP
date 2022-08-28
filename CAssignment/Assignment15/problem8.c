// Write a function in C to print all uniqueelements in an array.
#include <stdio.h>
#include <conio.h>
void Frequency(int a[]);
int checkback(int a[], int p);
void input(int str[]);
const int n=10;
int main()
{
    int a[n];
    input(a);
    printf("All the uniquee values are : ");
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
            
            if(count==1)
                printf("%d ", a[i]);
        }
    }
}
int checkback(int a[], int p)//check a number that is already consider
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
void input(int str[])
{
    printf("Enter numbers: ");
    for(int i=0;i<n;i++)
    scanf("%d",&str[i]);
}