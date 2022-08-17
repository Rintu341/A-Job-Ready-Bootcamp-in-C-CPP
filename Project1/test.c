#include <stdio.h>
#include <conio.h>
int checksort(int a[][4]);
int main ()
{   
    // int ch;
    // printf("\033[34m This is yellow\033[0m");
    // while ((ch = _getch()) != 27) /* 27 = Esc key */
    // {
    //     printf("%d", ch);
    //     if (ch == 0 || ch == 224)
    //         printf (", %d", _getch ()); 
    //     printf("\n");
    // }

    // printf("ESC %d\n", ch);
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    if(checksort(a))
        printf("Sorted");
    else
        printf("Unsort");
    return (0);
}
int checksort(int a[][4])
{
    int i, j, temp = a[0][0], pre;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            pre = a[i][j + 1];
            if (temp > pre)
            {
                return 0;
            }
            printf("temp =%d,pre =%d\n",temp,pre);
            temp = pre;

        }
    }
    return 1;
}