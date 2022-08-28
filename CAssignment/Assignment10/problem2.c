#include <stdio.h>
#include <conio.h>
float simple_interest(int,float,int);
int main(){
    int p,t;
    float r;
    printf("Enter Amount ,rate of Interest and time : ");
    scanf("%d %f %d",&p,&r,&t);
    float interest; 
    interest=  simple_interest(p,r,t);
    printf("simple interesr is %f",interest);
    return 0;
}
float simple_interest(int P,float R,int T){

    float interest;
    interest=(P*R*T)/100;
    return interest;
}
