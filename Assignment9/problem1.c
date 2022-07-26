#include <stdio.h>
#include <conio.h>

int main(){
    int M_number;
    printf("Enter a number of Month: ");
    scanf("%d",&M_number);
    switch (M_number)
    {
    case 1:
        printf("31 days in this Month");
        break;
    case 2:
        printf(" 28 days in this Month");
        break;
    case 3:
        printf(" 31 days in this Month");
        break;
    case 4:
        printf(" 30 days in this Month");
        break;
    case 5:
        printf(" 31 days in this Month");
        break;
    case 6:
        printf(" 30 days in this Month");
        break;
    case 7:
        printf(" 31 days in this Month");
        break;
    case 8:
        printf(" 31 days in this Month");
        break;
    case 9:
        printf(" 30 days in this Month");
        break;
    case 10:
        printf(" 31 days in this Month");
        break;
    case 11:
        printf(" 30 days in this Month");
        break;
    case 12:
        printf(" 31 days in this Month");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}