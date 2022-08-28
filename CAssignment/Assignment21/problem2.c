#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Employee
{
    int  id;
    char  name[20];
    float  salary;
};
struct Employee input(){
    struct Employee b2;
    printf("Enter Employee id ,name ,salary\n");
    scanf("%d",&b2.id);
    fflush(stdin);
    fgets(b2.name,20,stdin);
    int l=strlen(b2.name);
    b2.name[l-1]='\0';
    scanf("%f",&b2.salary);
    return b2;
}
int main(){
    struct Employee b1;
    b1=input();
    return 0;
}