#include <stdio.h>
#include <conio.h>

int check_prime(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int check;
    check =check_prime(n);
    (check==1)?printf("Prime Number"):printf("Not a Prime Number");
    return 0;
}
int check_prime(int N){
    int k=N/2;
    if(N==1||N==2||N==3)
            return 1;
    else{
            for (int i = 2; i <=k; i++)
            {
                if (N%i)
                    continue;
                else
                    return 0;
            }   
        return 1;
    } 
}  