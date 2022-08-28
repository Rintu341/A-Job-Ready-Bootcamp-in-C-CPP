#include <stdio.h>
#include <conio.h>

int combination(int ,int);
int factorial(int);

int main(){
    int N,R;
    printf("Enter no of items(n) and selected(r) : ");
    scanf("%d %d",&N,&R);
    int combinations =combination(N,R);
    printf("The number of combinations one can make that's %d\n",combinations);
    return 0;
}
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
        fact =fact*i;
    
    return fact;
}
int combination(int n,int r){

    return factorial(n)/(factorial(n-r)*factorial(r));

}