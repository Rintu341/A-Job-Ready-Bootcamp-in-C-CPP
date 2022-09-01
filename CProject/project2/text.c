#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    char symbol[10];
    fgets(symbol,10,stdin);
    printf("\n %d",strlen(symbol));
    return 0;
}