#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int length1,length2,length3;
    char exp;
    while(1){
        printf("a. Check isosceles triangle\n");
        printf("b. Check right angled triangle\n");
        printf("c. Check equilateral triangle\n");
        printf("d. exit\n");
        printf("Enter your choice\n");
        fflush(stdin);
        scanf("%c",&exp);
        
        switch (exp)
        {
        case 'a':
            printf("Enter Three length\n");  
            scanf("%d %d %d",&length1,&length2,&length3);
            if(length1==length2||length2==length3||length3==length1)
                printf("This is isosceles Triangle\n\n");
            else
                printf("This is not isosceles Triangle\n\n");
            break;
        case 'b':
            printf("Enter Three length\n");  
            scanf("%d %d %d",&length1,&length2,&length3);
            if(length1*length1+length2*length2==length3*length3||length3*length3+length2*length2==length1*length1||length1*length1+length3*length3==length2*length2)
                printf("This is Right Angled Triangle\n\n");
            else
                printf("This is not Right Angled Triangle\n\n");
            break;
        case 'c':
            printf("Enter Three length\n");  
            scanf("%d %d %d",&length1,&length2,&length3);
            if(length1==length2==length3)
                printf("This is  equilateral triangle Triangle\n\n");
            else
                printf("This is not  equilateral triangle Triangle\n\n");
            break;
        case  'd':
            exit(0);
                    
        default:
            printf("Invalid choice\n");
            break;
        }

    }
    return 0;
}