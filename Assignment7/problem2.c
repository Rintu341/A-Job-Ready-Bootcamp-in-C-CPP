#include <stdio.h>
#include <conio.h>

int main(){
    int n1=0,n2=1;
    int N,S;
    printf("Enter a N team : ");
    scanf("%d",&N);
    if(N==1)
        printf("0 ");
    else
    {
        if(N==2)
            printf("0 1 ");
        else
        {   printf(" 0 1 ");
            for (int i = 3; i <=N; i++)
            {
                S=n1+n2;
                n1=n2;
                n2 =S;
                printf("%d ",S);
            }
        }
    }            
    
    return 0;
}