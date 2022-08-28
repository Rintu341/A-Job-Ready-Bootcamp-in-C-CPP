#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Marks
{
    int Roll;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};
struct Marks input(struct Marks b2[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {

        printf("Enter student[%d] Roll,name , chem_marks,  maths_marks,  phy_marks(Each out of 100):\n", i + 1);
        scanf("%d", &b2[i].Roll);
        fflush(stdin);
        fgets(b2[i].name, 20, stdin);
        int l = strlen(b2[i].name);
        b2[i].name[l - 1] = '\0';
        scanf("%d", &b2[i].chem_marks);
        scanf("%d", &b2[i].maths_marks);
        scanf("%d", &b2[i].phy_marks);
        system("cls");
    }
}
void display(struct Marks b3[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Roll %d\tName  %s's percentage = %d %%\n", b3[i].Roll, b3[i].name, (b3[i].chem_marks + b3[i].maths_marks + b3[i].phy_marks) / 3);
    }
}
int main()
{

    struct Marks b1[5];
    input(b1, 5);
    display(b1, 5);

    return 0;
}