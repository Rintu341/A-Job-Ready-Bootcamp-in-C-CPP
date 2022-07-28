//Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
#include <conio.h>
int nextPrime(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int check=nextPrime(n);
    printf("Next prime number is %d ",check);
    return 0;
}
int nextPrime(int N){
    int count;
    if(N==1)
        return 2;
    else
    {
        if(N==2)
            return 3;
        else
        {   
                for(int j = N+1;1;j++){
                    count =0;
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
                        return j;
                } 
            }       
        }   
    }  


