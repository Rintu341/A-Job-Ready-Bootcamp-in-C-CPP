#include <stdio.h>
#include <conio.h>
/*
     if do not initialize then it by default auto class. 
*/
int main(){

    int a=9;// This a scope in function life time
    {
        int a=4;// This a scope in { }
        printf("%d\n",a);
    }
        printf("%d\n",a);
    return 0;
}