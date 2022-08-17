#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void randgen(int a[][4]);
void moveNumber(int a[][4]);
int checksort(int a[][4]);
void position(int a[][4], int *, int *);
int hashfunction(int key, int hasharr[]) // hash function
{
    if (hasharr[key] > 0)
        return 1;
    else
    {
        hasharr[key] = 1;
        return 0;
    }
}
void Rule(){
    printf("\n                               MATRIX PUZZLE\n");
    printf("                           A. RULE OF THIS GAME\n");
    printf("        1.You can move only 1 step at a time by given key\n");
    printf("            Move Up   : by 'u' key\n");
    printf("            Move Down : by 'b' key\n");
    printf("            Move Left : by 'f' key\n");
    printf("            Move Right: by 'j' key\n");
    printf("        2.You can move number at empty position only\n");
    printf("        3.For each valid move : your total number of move will Decreased by 1\n");
    printf("        4.Wining situation : Number in a 4*4 matrix should be in order from 1 to 15\n");
    printf("                ~ Wining situation ~\n");
    printf("---------------------\n");
    printf("|  1 |  2 |  3 |  4 |\n");
    printf("|  5 |  6 |  7 |  8 |\n");
    printf("|  9 | 10 | 11 | 12 |\n");
    printf("| 13 | 14 | 15 |    |\n");
    printf("---------------------\n");
}
void display(int arr[][4])
{
    printf("---------------------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 32)
                printf("| %c  ", arr[i][j]);
            else
                printf("| %d ", arr[i][j]);
            if (arr[i][j] / 10 == 0)
            {
                printf(" ");
            }
        }
        printf("|\n");
    }
    printf("---------------------\n");
}
int main()
{
    int Arr[4][4];
    char str[30];
    // display(Arr);
    Rule();
    while (1)
    {
        printf("\nDo you want play this game(y/n)?: ");
        switch (getch())
        {
        case 'y':
            // printf("\e[1;1H\e[2J");
            // clrscr();
            system("clear");
            randgen(Arr);
            printf("\nPlayer Name: ");
            fgets(str, 30, stdin);
            printf("Hello %s", str);
            display(Arr);
            printf("\n");
            moveNumber(Arr);
            break;
        case 'n':
            exit(0);
            break;
        }
    }
    printf("\e[1;1H\e[2J");
    return 0;
}
void randgen(int a[][4])
{
    int hash[17];
    int i, j, temp;
    for (int k = 0; k < 17; k++) // fill zero in all index
        hash[k] = 0;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == 3 && j == 3)
                a[3][3] = ' ';
            else
            {
                temp = (rand() % 15) + 1;
                if (hashfunction(temp, hash) == 0)
                    a[i][j] = temp;
                else
                {
                    j--;
                }
            }
        }
    }
}
void moveNumber(int a[][4])
{

    // printf("%d %d ",i ,j);
    char b;
    int move = 200;
    int i, j, temp;
    printf("move remaining : %d\n", move);
    while (1)
    {   
        if (move == 0)
        {
            printf("Better Luck Next Time\n");
            break;
        }
        b = getch();
        printf("Your press %c",b);
        printf("\e[1;1H\e[2J");
        if ((b == 'e' || b == 'E'))
            break;
        else
        {
            position(a, &i, &j);
            switch (b)
            {
            case 'u': // up
                if ((i + 1) < 4)
                {
                    temp = a[i + 1][j];
                    a[i + 1][j] = a[i][j];
                    a[i][j] = temp;
                }
                break;
            case 'b': // down
                if ((i - 1) >= 0)
                {
                    temp = a[i - 1][j];
                    a[i - 1][j] = a[i][j];
                    a[i][j] = temp;
                }
                break;
            case 'f': // left
                if ((j + 1) < 4)
                {
                    temp = a[i][j + 1];
                    a[i][j + 1] = a[i][j];
                    a[i][j] = temp;
                }
                break;
            case 'j': // right
                if ((j - 1) >= 0)
                {
                    temp = a[i][j - 1];
                    a[i][j - 1] = a[i][j];
                    a[i][j] = temp;
                }
                break;
            default:
                printf("Press Valid move!\n");
                move++;
                break;
            }
            if (checksort(a))
            {
                display(a);
                printf("You Win");
                break;
            }
            display(a);
            move = move - 1;
        printf("move remaining : %d\n", move);
        }
    }
}
int checksort(int a[][4])
{
    int i, j, temp = a[0][0], pre;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            pre = a[i][j + 1];
            if (temp > pre)
            {
                return 0;
            }
            temp = pre;
        }
    }
    return 1;
}
void position(int a[][4], int *p, int *q)
{
    int i, j, temp, k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] == 32)
            {
                k++;
                break;
            }
        }
        if (k == 1)
            break;
    }
    *p = i, *q = j;
}