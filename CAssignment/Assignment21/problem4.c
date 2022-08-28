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
void highestsalary(struct Employee b1[],int size){
    int i=0,j;
    float temp;
    while (i<1)
    {
        for(j=1;j<size-1;j++){
            if(b1[i].salary>b1[j].salary){
                temp=b1[i].salary;
                b1[i].salary=b1[j].salary;
                b1[j].salary=temp;
            }
        }
        i++;
    }
    
}
int main()
{
    struct Employee b[10];
    input(b, 10);
    highestsalary(b,10);
    // display(b,10);
    printf("Highest salry of Emplyee %f\n",b[9].salary);
    return 0;
}