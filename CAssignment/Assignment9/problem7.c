#include <stdio.h>
#include <conio.h>

int main(){
    float unit;
    float x;

    printf("Enter electricity Unit charges : \n");
    scanf("%fS",&unit);
    switch (unit>50)
    {
        case 1:
            switch (unit>150)
            {
            case 1:
                switch (unit>250)
                {
                case 1:
                    x=(25+75+120+(unit-250)*1.50);
                    break;
                case 0:
                    x=(25+75+(unit-150)*1.2);
                 break;                   
                }
                break;
            case 0:
                x=(25+(unit-50)*.75);
                break;
            }
        break;
        case 0: 
            x= unit*.5;
        break;
    default :
        printf("Invalid input");
        break;
    }
    float Amount;
    
    Amount= (x + x * .2);
    printf("Your total electricity bill is %f",Amount);
    getch();
    return 0;
}