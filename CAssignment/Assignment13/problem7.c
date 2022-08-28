#include <stdio.h>
#include <conio.h>
int hcf(int,int);
int main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    int k=hcf(n1,n2);
    printf("%d",k);
    return 0;
}
int hcf(int n1,int n2){
    if(n1>=n2){
        if(n1%n2==0)
            return n2;
        return hcf(n1%n2,n2);
    }else{
        if(n2%n1==0)
            return n1;
        return hcf(n1,n2%n1);
    }
}