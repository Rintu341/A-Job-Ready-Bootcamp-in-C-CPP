#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    int  Roll;
    char  name[20];
    char  class[5];
};
struct student input(struct student b2[]){
    int i;
    for(i=0;i<10;i++)
    {

    printf("Enter student Roll,name ,class\n");
    scanf("%d",&b2[i].Roll);
    fflush(stdin);
    fgets(b2[i].name,20,stdin);
    int l=strlen(b2[i].name);
    b2[i].name[l-1]='\0';
    fgets(b2[i].class,5,stdin);
    }
}
void display(struct student b3[]){
    int i;
    for(i=0;i<10;i++)
    {
    printf("%d %s %s\n",b3[i].Roll,b3[i].name,b3[i].class);
    }
   
}
int main(){
    struct student b1[10];
    input(b1);
    display(b1);

    return 0;
}