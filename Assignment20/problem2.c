//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <conio.h>
void swap(char *,char *);
int main(){
    char str[10]="sujan";
    char str2[10]="mandal";
    swap(str,str2);
    printf("\n%s %s",str,str2);
    return 0;
}
void swap(char *p,char *q){
    char temp;
    for (int i = 0; i <10; i++)
    {
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
}