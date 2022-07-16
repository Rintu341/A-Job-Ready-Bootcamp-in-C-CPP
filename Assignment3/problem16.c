#include <stdio.h>
#include <conio.h>

int main(){
    char Symbol;
    printf("Enter any character : ");
    scanf("%c",&Symbol);
    if (Symbol>='A'&&Symbol<='Z')  
        printf("Uppercase");      
    else
    {
        if (Symbol>='a'&&Symbol<='z')
            printf("LowerCase");
        else
        {   if(Symbol>='0' && Symbol<='9')
                printf("Digit");
            else
                printf("Special Character\n");
        }            
    }    
    return 0;
}