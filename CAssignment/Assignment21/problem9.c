#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    int Roll;
    char name[20];
    char class[5];
};
struct student input(struct student b2[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {

        printf("Enter student Roll,name ,class :\n");
        scanf("%d", &b2[i].Roll);
        fflush(stdin);
        fgets(b2[i].name, 20, stdin);
        int l = strlen(b2[i].name);
        b2[i].name[l - 1] = '\0';
        fgets(b2[i].class, 5, stdin);
    }
}
void display(struct student b3[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d %s %s\n", b3[i].Roll, b3[i].name, b3[i].class);
    }
}
int main()
{
    int n;
    printf("Enter student number: ");
    scanf("%d", &n);
    struct student b1[n];
    input(b1, n);
    display(b1, n);

    return 0;
}