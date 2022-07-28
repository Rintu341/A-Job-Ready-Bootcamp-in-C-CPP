// Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
#include <conio.h>
void PrintPrime(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    PrintPrime(n);
    return 0;
}
void PrintPrime(int N){
    int count;
    if(N==1)
        printf("1 ");
    else
    {
        if(N==2)
            printf("1 2 ");
        else
        { 
            if(N==3)
                printf("1 2 3 ");
            else{
                printf("1 2 3 ");
                for(int j = 4;j<=N;j++){
                    count=0;
                    for (int i = 2; i <=j/2; i++)
                    {
                        if (j%i)
                            continue;
                        else
                        {
                            count++;
                            break;
                        }
                    }
                    if(count==0)
                        printf("%d ",j);
                } 
            }  
        }   
    }  

}
