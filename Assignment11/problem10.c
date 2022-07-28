//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//function.
#include <stdio.h>
#include <conio.h>
int factorial(int);
int sum(int);
int main(){
    printf("sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 is %d",sum(5));
    return 0;
}
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
        fact =fact*i;
    
    return fact;
}
int sum(int n){
    int sum=0;
    for (int i = 1; i <=n; i++)
        sum=sum+(factorial(i)/i);
    
    return sum;

}