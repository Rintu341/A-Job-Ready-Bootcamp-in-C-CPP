// Write a function to check whether a given string is an alphanumeric string or not.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void inputString(char str[]);
void checkAlphanumeric(char a[]);
int main()
{
    char a[30];
    inputString(a);
    checkAlphanumeric(a);
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}
void checkAlphanumeric(char a[])
{   int alpha=0,digit=0;
    for (int i = 0; a[i]; i++)
    {
       if(a[i]>='0'&&a[i]<='9'){
            digit ++;
            break;
       }
    }
    for (int i = 0; a[i]; i++)
    {
       if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
            alpha ++;
            break;
       }
    }
    // printf("%d ",digit);
    // printf("%d ",alpha);
    printf("\n");
    if(alpha && digit)
        printf("ALPHANUMERIC");
    else
        printf("NOT AN ALPHANUMERIC");

}