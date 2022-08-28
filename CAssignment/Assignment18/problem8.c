// Write a function to count words in a given string
#include <stdio.h>
#include <conio.h>
#include <string.h>
int countWord(char a[]);
void inputString(char str[]);
int main(){
    char a[30]; 
    inputString(a);
    int count=countWord(a);
    printf("Given string is contain %d Word",count);
    return 0;
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str,30,stdin);
}
int countWord(char a[]){
    char b[30];
    int r=0;//for counting
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]=='\n'||a[i]==9||a[i]==32){
            r++;
        }
    }
    return r;
}

