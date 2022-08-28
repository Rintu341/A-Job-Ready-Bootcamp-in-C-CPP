#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i=0,j=1;
    char ch,*str;
    str=(char*)malloc(sizeof(char));
    printf("Enter a String: ");
    while (ch!='\n')
    {
        ch=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=ch;  
        i++;
    }
    str[i]='\0';
    printf("\nEnter String is %s",str);
    free(str);
    return 0;
}