// Write a function to check whether a given string is palindrome or not
#include <stdio.h>
#include <conio.h>
#include <string.h>
void palindrome(char a[]);
void inputString(char str[]);
int main(){
    char a[30]; 
    inputString(a);
    palindrome(a);
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    gets(str);
}
void palindrome(char a[]){
    char b[30];
    for (int i = 0; a[i]!='\n'; i++)
    {
        b[i]=a[i];
    }
    strrev(b);
    // printf("%s\n",b);
    int r;
    r=strcmp(a,b);
    // printf("%s",a);
    // printf("%d\n",r);
    if(r==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
