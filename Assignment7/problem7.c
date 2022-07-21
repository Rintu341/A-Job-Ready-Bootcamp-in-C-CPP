#include <stdio.h>
#include <conio.h>

int main(){
    int n1,n2,count;
    int k;
    printf("Enter two Number : ");
    scanf("%d %d",&n1,&n2);
    k= (n1>n2)?n1:n2;
    if(n1==1 && n2==2)
        printf("1 2 ");
    else
    {
        if(n1==2&&n2==3)
            printf("2 3");
        else
        { 
            if(n1==1 && n2==3)
                printf(" 1 2 3");
            else{
                for(int j = (n1>n2)?n2:n1;j<=k;j++){
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