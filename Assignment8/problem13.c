 

#include <stdio.h>

int main(){
    char ch;
    for (int i = 1; i<=7; i++)
    {   
        ch='A';
        for (int j = 1; j<=13; j++)
        {
            if(j<=8-i||j>=6+i){
                printf("%c",ch);
                 
            }else
                printf(" ");

            j<7?ch++:ch--;    
        }

        printf("\n");  
    }
    

    
    return 0;
}   