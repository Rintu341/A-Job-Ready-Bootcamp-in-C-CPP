#include <stdio.h>
#include <conio.h>

int arrangements(int ,int);
int factorial(int);

int main(){
    int N,R;
    printf("Enter no of items(n) and selected(r) : ");
    scanf("%d %d",&N,&R);
    int arrangement = arrangements(N,R);
    printf("The number of arrangements one can make that's %d\n",arrangement);
    return 0;
}
int factorial(int n){ //factorial calculate function
    int fact=1;
    for (int i = 1; i <=n; i++)
        fact =fact*i;
    
    return fact;
}
int arrangements(int n,int r){ //no of arrangements calculate function
    int nPr;                   // this is the formula of NpR   n!/(n-r)!
    int n_r;
    n_r=factorial(n-r);
    n=factorial(n);
    nPr= (n/n_r);
    return nPr;

}