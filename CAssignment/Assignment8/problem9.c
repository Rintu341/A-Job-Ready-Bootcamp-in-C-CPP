#include <stdio.h>

int main(){
    int ch ;
    for (int i = 1; i <=4; i++)
    {   
        ch = 1;
        for (int j =1; j<=7; j++){
                if (j>=i&&j<=8-i){                    
                    printf("%d",ch); 
                    j<4?ch++:ch--; 
                }             
                else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}