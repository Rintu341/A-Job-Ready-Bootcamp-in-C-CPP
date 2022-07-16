#include <stdio.h>
#include <conio.h>

int main(){
    char alphabet;
    printf("Enter a Alphabet : ");
    scanf("%c",&alphabet);
    if (alphabet>='A'&&alphabet<='Z')  
        printf("Uppercase");      
    else
    {
        if (alphabet>='a'&&alphabet<='z')
            printf("LowerCase");
        else
            printf("You enter another character");
    }
    
    return 0;
}