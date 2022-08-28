#include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c,x;
    printf("Enter  roots of quadratic equation : ");
    scanf("%d %d %d",&a,&b,&c);
    x= b*b-4*a*c;
    if (x==0)
        printf("real & equal\n");
    else
    {
        if(x>0)
            printf("real & distinct\n");
        else
            printf("imaginary roots\n");
            
    }
    
    
    return 0;
}