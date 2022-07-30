#include <stdio.h>
#include <conio.h>
void DectoBin(int n);
int main(){
    int Dec;
    printf("Enter a number : ");
    scanf("%d",&Dec);
    printf("%d Binary is : ",Dec);
    DectoBin(Dec);
    return 0;
}
void DectoBin(int n){
    if(n!=0){
        DectoBin(n/2);
        if(n%2==0)
            printf("0 ");
        else
            printf("1 ");
        
    }
}