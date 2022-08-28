#include <stdio.h>
#include <conio.h>

int main(){
    int Hcm,num1,num2;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);

    int N=((num1>num2)?num1:num2)/2;

    for (int i = N; i!= 0;i--){
        if (num1%i==0 && num2%i==0){
            Hcm=i;
            break;
        }
        
    }
    printf(" Hcm is %d",Hcm);  
    return 0;
}