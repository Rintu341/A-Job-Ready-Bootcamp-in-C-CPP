
#include <stdio.h>
#include <conio.h>
#include <string.h>
void calculate(char *ptr,int *count){
    int i;
    for ( i = 0;*(ptr+i); i++);
    if(*(ptr+(i-1))=='\n')
        *count=i-1;
    else
        *count=i;
}
int main(){
    char str[20];
    int count = 0;
    printf("Enter a  String\n");
    fgets(str,20,stdin);
    calculate(str,&count);
    printf("Length of a String is %d",count);
    return 0;
}