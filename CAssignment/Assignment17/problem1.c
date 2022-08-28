#include <stdio.h>
#include <conio.h>

int main(){
    char str[20];
    int i;
    printf("Enter any string\n");
    gets(str);
    for(i=0;str[i];i++);
    printf("Length of  string is %d",i);
    return 0;
}