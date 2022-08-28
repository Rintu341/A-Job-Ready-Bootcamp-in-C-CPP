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
void display(struct Employee b3){
    printf("%d %s %f",b3.id,b3.name,b3.salary);
   
}
int main(){
    struct Employee b1;
    b1=input();
    display(b1);

    return 0;
}