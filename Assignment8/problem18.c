#include <stdio.h>
#include <conio.h>

int main(){
    int k=1;
    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <=9; j++)
        {
            if (j>=6-k&&j<=4+k)
            {
                printf("*");
            }else
                printf(" ");
            
        }
        i>=5?k--:k++;
        printf("\n");
    }
    
    return 0;
}