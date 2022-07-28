//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <conio.h>
void printPrimeBTTwo(int ,int);
int main(){
    int N1,N2;
    printf("Enter two number: ");
    scanf("%d %d",&N1,&N2);
    printPrimeBTTwo(N1,N2);
    return 0;
}
void printPrimeBTTwo(int n1,int n2){
    int count;
    int k= (n1>n2)?n1:n2;
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