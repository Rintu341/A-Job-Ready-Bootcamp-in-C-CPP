#include <stdio.h>
#include <conio.h>

int main(){
    int * p;
    register int a=6;
    p =&a;
    printf("%d ",*p);// this is an error ,every register variable(if request excepted) store in regiter, this register use for faster accessing variable.

    return 0;
}