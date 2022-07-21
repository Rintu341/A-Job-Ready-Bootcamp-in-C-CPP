#include <stdio.h>
#include <conio.h>

int main(){
    int N,count;
    printf("Enter a Number : ");
    scanf("%d",&N);
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
    return 0;
}