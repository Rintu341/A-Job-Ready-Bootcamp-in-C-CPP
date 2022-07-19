#include <stdio.h>
#include <conio.h>

int main(){
    int table;
    printf("Enter a times to print : ");
    scanf("%d",&table);
    printf("Table of % is : \n",table);
    for (int i = 1; i <=10; i++)
        printf(" %d * %d = %d\n",table,i,table*i);
      
    return 0;
}