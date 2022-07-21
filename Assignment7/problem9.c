#include <stdio.h>
#include <conio.h>

int main(){
    int N,K,count=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    K=N;// N value copy in K for counting how much digt in there
    while(K!=0) // count operation
    {
        K=K/10;
        count++;
    }
    int P=N,result=1,R=0;
    int rem;
    while(N!=0)
    {
        rem=N%10;
        for (int i = 1; i <= count; i++)
        {
            result =result*rem;        // multiply  it's digit itselt  
        }
        N=N/10;
        R=R+result;
        result=1;     
    }
    printf(" %d  %d \n",P ,R);//==> P is a previous value of N And R is operational value of N
    if(P==R)
        printf("number is an Armstrong number ");
    else
        printf("number is not  an Armstrong number ");

    return 0;
}