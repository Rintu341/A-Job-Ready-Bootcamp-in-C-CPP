#include <stdio.h>
#include <conio.h>
#include <string.h>
void countVowelConsonent(char *, int *vow, int *cons);
int main()
{
    char str[20];
    char str3[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    strcpy(str3,str);
    strupr(str3);
    int vowel=0,consonant=0;
    countVowelConsonent(str3,&vowel,&consonant);
    printf(" vowel=%d  consonant= %d ",vowel,consonant);
    return 0;
}
void countVowelConsonent(char *ptr, int *vow, int *cons)
{
    for(int i=0;ptr[i];i++)
    {
        if(i[ptr] >= 'A' && i[ptr] <= 'Z')
        {
            if (i[ptr] == 'A' || i[ptr] == 'E' || i[ptr] == 'I' || i[ptr] == 'O' || i[ptr] == 'U')
                (*vow)++;
            else
                (*cons)++;
        }
    }
    
}
// int p=1;
//     int *ptr;
//     ptr=&p;
//     (*ptr)++;
//     printf("%d ",p);