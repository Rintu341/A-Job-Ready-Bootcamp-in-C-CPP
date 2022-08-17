#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void randgen(int a[][4]);
void moveNumber(int a[][4]);
int checksort(int a[][4]);
void position(int a[][4], int *, int *);
void red()
{
    printf("\033[1;31m");
}
void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}
void Blue()
{
    printf("\033[1;34m");
}
void green()
{
    printf("\033[1;32m");
}
void cyan()
{
    printf("\033[1;36m");
}
void purple()
{
    printf("\033[1;35m");
}
int hashfunction(int key, int hasharr[]) // hash function it check unique value
{
    if (hasharr[key] > 0)
        return 1;
    else
    {
        hasharr[key] = 1;
        return 0;
    }
}
void Rule()
{
    green();
    printf("\n                               MATRIX PUZZLE");
    Blue();
    printf("\n                           A. RULE OF THIS GAME\n");
    yellow();
    printf("        1.You can move only 1 step at a time by Arrow key\n");
    printf("            Move Up   : by Up key\n");
    printf("            Move Down : by Down key\n");
    printf("            Move Left : by Left key\n");
    printf("            Move Right: by Right key\n");
    printf("        2.You can move number at empty position only\n");
    printf("        3.For each valid move : your total number of move will Decreased by 1\n");
    printf("        4.Wining situation : Number in a 4*4 matrix should be in order from 1 to 15\n");
    purple();
    printf("                ~ Wining situation ~\n");
    cyan();
    printf("---------------------\n");
    printf("|  1 |  2 |  3 |  4 |\n");
    printf("|  5 |  6 |  7 |  8 |\n");
    printf("|  9 | 10 | 11 | 12 |\n");
    printf("| 13 | 14 | 15 |    |\n");
    printf("---------------------\n");
    reset();
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
        green();
        printf("\nDo you want play this game(y/n)?: ");
        switch (getch())
        {
        case 'y':
            printf("\e[1;1H\e[2J");
            // clrscr();
            // system("clear");
            randgen(Arr);
            Blue();  
            printf("\nPlayer Name: ");
            fgets(str, 30, stdin);
            yellow();
            printf("Let's Play %s", str);
            printf("                ,move remaining : 1000\n");
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
    int hash[17]={0};
    int i, j, temp;
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
    int b;
    int move = 1000;
    int i, j, temp;
    green();
    while (1)
    {
        if (move == 0)
        {
            red();
            printf("\nBetter Luck Next Time\n");
            break;
        }
        b = _getch();
        printf("Your press %c", b);
        printf("\e[1;1H\e[2J");
        if (b == 0 || b == 224)
        {
            if ((b == 'e' || b == 'E'))
                break;
            else
            {
                position(a, &i, &j);
                switch (_getch())
                {
                case 72: // up
                    if ((i + 1) < 4)
                    {
                        temp = a[i + 1][j];
                        a[i + 1][j] = a[i][j];
                        a[i][j] = temp;
                    }
                    break;
                case 80: // down
                    if ((i - 1) >= 0)
                    {
                        temp = a[i - 1][j];
                        a[i - 1][j] = a[i][j];
                        a[i][j] = temp;
                    }
                    break;
                case 75: // left
                    if ((j + 1) < 4)
                    {
                        temp = a[i][j + 1];
                        a[i][j + 1] = a[i][j];
                        a[i][j] = temp;
                    }
                    break;
                case 77: // right
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
            }
            if (checksort(a))
            {
                display(a);
                green();
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