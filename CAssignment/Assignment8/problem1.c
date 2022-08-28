
/*

*
* *
* * *
* * * *
* * * * *

*/


#include <stdio.h>

int main(){
    // i number of Rows ,j number of columns
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if(j<=i)
                printf("* ");
            else
                printf(" ");       
        }
        printf("\n");
        
    }

    return 0;
}