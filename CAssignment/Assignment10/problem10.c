// Write a function to print all prime factors of a given number. For example, if the
//number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
#include <conio.h>

void factor(int);
int check_prime(int);

int main(){
    int n;
    printf("Enter any Number: ");
    scanf("%d",&n);
    factor(n);
    return 0;
}
void factor(int N){
    int check = check_prime(N);
        if (check==1)
        {
            printf("prime Fector is 1 and %d",N);
         }else{
            int k=N;
            int  i = 2;
            printf("Prime fector are : \n");
            while(i <k)
            {
                if (N%i){
                i++;
                continue;
            }
            else{
                N=N/i;
                printf("%d ",i);
            }
        }
      }
}
int check_prime(int N){
    
    if(N==1||N==2||N==3)
            return 1;
            else{          
                    for (int i = 2; i <=N/2; i++)
                    {
                        if (N%i)
                            continue;
                        else
                            return 0;   
                    }   
                    return 1;
                } 
}  


