// Write a program in C to copy one string to another string
#include <stdio.h>
#include <conio.h>
void cpystr(char [],char []);// replase strcpy to (cpystr my own function)
void inputString(char str[]);
int main(){
    char str[30],str2[30];
    inputString(str);
    cpystr(str2,str);
    printf("String copy in another String%s",str2);
    return 0;
}
void cpystr(char terget[],char source[]){
    int i;
    for( i=0;source[i];i++){
        terget[i]=source[i];
    }
    terget[i]='\0';
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 20, stdin);
}

