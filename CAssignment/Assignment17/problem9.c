// Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <conio.h>
void sorting(char b[]); 
void inputString(char str[]);
int main(){
    char a[30];
    inputString(a);
    sorting(a);
    printf("%s",a);
    return 0;
}
void sorting(char b[]){
    char temp;
    for(int i=0;b[i]!='\n';i++){
        for (int j = i+1;b[j]!='\n'; j++)
        {
            if (b[i]>b[j])
            {   
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    
}
void inputString(char str[])
{
    printf("Enter any string: ");
    fgets(str, 30, stdin);
}