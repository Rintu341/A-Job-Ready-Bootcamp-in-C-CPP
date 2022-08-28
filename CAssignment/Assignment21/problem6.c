#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void input(struct Employee b2[], int size)
{
    int i ;
    for (i = 0; i < size; i++)
    {
        printf("Enter Employee[%d] id ,name ,salary\n",i+1);
        scanf("%d", &b2[i].id);
        fflush(stdin);
        fgets(b2[i].name, 20, stdin);
        int l = strlen(b2[i].name);
        b2[i].name[l - 1] = '\0';
        scanf("%f", &b2[i].salary);
    }
}
void display(struct Employee b3[],int size)
{   
    int i;
    for(i=0;i<size;i++)
        printf("%d %s %f\n", b3[i].id, b3[i].name, b3[i].salary);
}
void salarySort(struct Employee b1[],int size){
    int i,j;
    struct Employee temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++){
            if(strcmp(b1[i].name,b1[j].name)==1){
                temp=b1[i];
                b1[i]=b1[j];
                b1[j]=temp;
            }
        }
    }
    
}
int main()
{
    struct Employee b[10];
    input(b, 10);
    salarySort(b,10);
    display(b,10);
    return 0;
}