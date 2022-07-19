#include <stdio.h>
#include <conio.h>

int main(){
    int N,count=0;
    printf("Enter a Number : ");
    scanf("%d",&N);

    if (N==1||N==2||N==3)
    {
        printf("Prime Number");
    }else
    {
        for (int i = 2; i <=N/2; i++)
        {
            if(N%i){
                continue;
            }
            else{
                count++;
                break;
            }
              
        }// for loop end 
            if(count>0)
                printf("Not Prime");
            else    
                printf("Prime Number");
    }
    
    
    return 0;
}