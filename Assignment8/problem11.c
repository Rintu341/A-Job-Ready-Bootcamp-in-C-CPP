 #include <conio.h>
 #include <stdio.h>

int main(){
    char ch;
    for (int i = 1; i <=5; i++)
    {   ch='A';
        for (int j = 1; j <=9; j++)
        {
            if(j>=6-i&&j<=4+i){
                printf("%c",ch);
                j>=5?ch--:ch++;  
            }
            else
                printf(" ");    
        }
        printf("\n");
    }
    
    return 0;
}