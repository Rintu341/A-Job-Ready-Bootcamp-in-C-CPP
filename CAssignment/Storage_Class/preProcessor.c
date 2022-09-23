#include <stdio.h>
#include <conio.h>

#define ROW 4
//function like Macro
#define ADD(l,m) (l+m)
//Chain Macro
#define INSTRGRAM FOLLOWERS
#define FOLLOWERS 5 
int main(){
    printf("%d",ROW);
    printf("\n%d",ADD(3,8));

    printf("\n%d",INSTRGRAM);
    return 0;
}