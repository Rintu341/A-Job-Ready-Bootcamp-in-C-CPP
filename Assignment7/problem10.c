#include <stdio.h>
#include <conio.h>

int main(){
//    int give_n;
//    printf("Enter a number : "); 
//    scanf("%d",&give_n);
   int count=0,K;
    printf("Armstrong numbers are : \n");
   for (int  N = 0; N<=1000; N++)
   {
    K=N;// N value copy in K for counting how much digt in there
    count=0;
    while(K!=0) // count operation
    {
        K=K/10;
        count++;
    }
    int P=N,result=1,R=0;
    int rem=0,A=N;
    while(A!=0)
    {
        rem=A%10;
        for (int i = 1; i <= count; i++)
        {
            result =result*rem;        // multiply  it's digit itselt  
        }
        A=A/10; //  loop flow contol by A
        R=R+result;
        result=1;     
    }
        if (P==R)
            printf("%d ",R);
          
   }// end the first outer loop
    return 0;
}