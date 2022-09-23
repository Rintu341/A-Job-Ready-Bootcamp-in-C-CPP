#include <stdio.h>
#include <conio.h>
union str
{
    int p;
    double g;
};
/*
    we use union if we use only one data  
*/
int main(){
    union str obj;
    printf("%d",sizeof(obj));
    obj.p=6;
    obj.g=9;//overwrite value
    printf("\n%d ",obj.p);
    printf("\n%d ",obj.g);

    return 0;
}