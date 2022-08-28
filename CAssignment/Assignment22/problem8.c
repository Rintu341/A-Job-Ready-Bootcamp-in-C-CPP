#include <stdio.h>
#include <conio.h>

int main(){
    int * p;
    p=(int*)malloc(sizeof(int));
    free(p);// p become dangling pointer
    *p=5; // illegal use of pointer
    return 0;
}