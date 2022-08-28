//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <conio.h>
#include <string.h>
void swap(char **,char **);
int main(){
    char *str[10];
    char *str2[10];
    fgets(str,10,stdin);
    fgets(str2,10,stdin);
    swap(str,str2);
    printf("\n%s %s",str,str2);
    return 0;
}
void swap(char **p,char **q){
    char *temp;
        temp=(*p);
        (*p)=(*q);
        (*q)=temp;
}