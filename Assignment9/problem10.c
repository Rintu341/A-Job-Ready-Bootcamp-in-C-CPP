#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("Enter  values of a, b ,c: ");    
    scanf("%lf%lf%lf",&a,&b,&c);
    double determinant,root;
    determinant=(b*b-4*a*c);
    switch (determinant>0)
    {
    case 1:
                root =((-b*+(sqrt(b*b-4*a*c)))/2*a);
                printf(" root1 =%lf",root);
                root =((-b*-(sqrt(b*b-4*a*c)))/2*a);
                printf(" root2 =%lf",root);
                break;
    case 0:
                    switch (determinant<0)
                    {
                    case 1:
                        root =((-b/2*a) +(sqrt(-(b*b-4*a*c)))/2*a);
                        printf(" root1 =%lf",root);
                        root =((-b/2*a) -(sqrt(-(b*b-4*a*c)))/2*a);
                        printf(" root2 =%lf",root);
                        break;
                    case 0:
                        root =(-b/2*a);
                        printf("only one root = %lf",root);
                        break;
        
                     }
        break;
    }
    return 0;
}