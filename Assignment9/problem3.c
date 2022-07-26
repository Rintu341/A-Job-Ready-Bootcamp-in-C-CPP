#include <stdio.h>
#include <conio.h>

int main(){
    int day;
    printf("Enter the day number of a week : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("In Monday workout day");
        break;
    case 2:
        printf("In Tuesday work day");
        break;
    case 3:
        printf("In Wednesday Normal day day");
        break;
    case 4:
        printf("In Thursday workout day");
        break;
    case 5:
        printf("In Friday your birthday");
        break;
    case 6:
        printf("In Saturday Ineuron Course day");
        break;
    case 7:
        printf("In Sunday Relax day");
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}