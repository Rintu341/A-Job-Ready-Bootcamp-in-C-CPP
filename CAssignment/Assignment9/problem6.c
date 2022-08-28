#include <stdio.h>
#include <conio.h>

int main(){
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    switch (year%100==0)
    {
    case 1:
        switch (!(year%400))
        {
        case 0:
            printf("Not Leap Year");
            break;
        case  1:
            printf("Leap Year");
            break;
        }
        break;
    case 0: 
        switch (!(year%4))
        {
        case 0:
            printf(" Not Leap year");
            break;
        case 1:
            printf("Leap year");
           break;

        }   
        break;
    }// switch end here
    return 0;
}
 
