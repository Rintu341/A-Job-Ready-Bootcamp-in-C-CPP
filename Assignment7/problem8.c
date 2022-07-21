#include <stdio.h>
#include <conio.h>

int main(){
    int N ,count;
    printf("Enter a Number : ");
    scanf("%d",&N);
    
    if(N==1)
        printf("Next prime Number is 2");
    else
    {
        if(N==2)
            printf("Next prime Number is 3 ");
        else
        {   
                for(int j = N+1;1;j++){
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
                    if(count==0){
                        printf("Next prime Number is %d ",j);
                        break;         
                }  
            }       
        }   
    }  
    return 0;
}