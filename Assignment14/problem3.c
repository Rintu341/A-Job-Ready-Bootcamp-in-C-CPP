#include <stdio.h>
#include <conio.h>
void input(int b[]);
int sumo(int c[]);
int sume(int c[]);

int main(){
    int a[10];
    input(a);
    int k=sumo(a);
    int p=sume(a);
    printf("sum of the odd numbers is %d\n",k);
    printf("sum of the even numbers is %d",p);

    return 0;
}
int sumo(int c[]){
    int sumO=0;
    for(int i=0;i<=9;i++){
        if(c[i]%2)
            sumO=sumO+c[i];
    }
        
    return sumO;
}
int sume(int c[]){
    int sumE=0;
    for(int i=0;i<=9;i++){
        if(c[i]%2==0)
            sumE=sumE+c[i];
    }
        
    return sumE;
}
void input(int b[]){
    printf("Enter a number: ");
    for(int i=0;i<=9;i++)
        scanf("%d",&b[i]);
}