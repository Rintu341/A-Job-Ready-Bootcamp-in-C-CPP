#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int horizontal(char matrix[][3], char symbol);
int vertical(char matrix[][3], char symbol);
int diagonals(char[][3], char);
void PutXO(char matrix[][3], char p, int S);
int input(char str[]);
int playAnotherPlayer(char matrix[][3]);
int PlayWithComputer(char matrix[][3]);
int Horizontal_checking(char matrix[][3], char *p, char Symbol);
int Vertical_checking(char matrix[][3], char *p, char Symbol);
int Digonal_checking(char matrix[][3], char *p, char Symbol);
int PlayWithEvilComputer(char matrix[][3]);
void Rule()
{
    printf("\n\n\n                   RULES FOR Tic-Tac-Toe\n\n");
    printf("1.Play occurs on a 3 by 3 grid of 9 empty squares.\n");
    printf("2.Two players alternate marking empty squares,\n   the first player marking Xs and the second player marking Os.\n");
    printf("3.If one player places three of the same marks \n   in a row,that player wins.\n");
    printf("4.If the spaces are all filled and there is no \n   winner, the game ends in a draw.\n\n");
}
void display(char arr[][3])
{
    printf("@@@@@@@@@@@@@@@@@@@ Tic Tac Toe @@@@@@@@@@@@@@@@@\n");
    printf("______________\n");
    for (int i = 0; i < 3; i++)
    {
        printf("    |    |    \n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %c  ", arr[i][j]);
            if (j != 2)
                printf("|");
        }
        printf("\n");
        printf("____|____|____\n");
    }
}
int Hash[10] = {0};
int hash(int key)
{
    if (Hash[key] == 0)
    {
        Hash[key]++;
        return 1;
    }
    else
        return 0;
}

int main() // main function
{
    printf("#%#%#%#%#%#%#%#%#%#%#%#% Welcome in Tic-Tac-Toe #%#%#%#%#%#%#%#%#%#%#%#%");
    Rule();
    char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // display(matrix);
    int ch;
    // 1.Play with computer2.Play with your friend3.Exit
    while (1)
    {
        char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        printf("Enter Your Choice\n");
        printf("1.Play with your friend\n");
        printf("2.Play with computer\n");
        printf("3.Play with Evil Computer\n");
        printf("4.Exit\n");
        scanf("%d", &ch);
        fflush(stdin);
        system("cls");
        switch (ch)
        {
        case 2:
            if (PlayWithComputer(matrix) == 0)
                printf("\n\n Game Draw! \n");
            getch();
            break;
        case 1:
            if (playAnotherPlayer(matrix) == 0)
                printf("\n\n Game Draw! \n");
            getch();
            break;
        case 3:
            if (PlayWithEvilComputer(matrix) == 0)
                printf("\n\n Game Draw! \n");
            getch();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!Pleace Enter Again\n");
            getch();
            break;
        }
        system("cls");
        for (int i = 0; i < 10; i++)
            Hash[i] = 0;
    }

    getch();
    return 0;
}
int input(char str[])
{
    int p;
    while (1)
    {
        printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
        printf("%s's turn : ", str);
        scanf("%d", &p);
        if (hash(p) == 1)
            return p;
        else
        {
            printf("Space already Occupied\n");
        }
    }
}
int playAnotherPlayer(char matrix[][3])
{
    char str2[30], str[30];
    int temp;
    // int player1,player2;
    printf("Player 1 (Name): ");
    fgets(str, 30, stdin);
    if (strlen(str) < 29)
        str[strlen(str) - 1] = '\0';
    printf("Player 2 (Name): ");
    fgets(str2, 30, stdin);
    if (strlen(str2) < 29)
        str2[strlen(str2) - 1] = '\0';
    printf("player 1 ( X )\n");
    printf("player 2 ( O )\n");
    display(matrix);

    int x, y;
    for (temp = 0; temp < 9; temp++)
    {

        x = input(str);
        PutXO(matrix, x + 48, 1); // x+ 48 = '1' (x is a position+ 48 then it is is a characters which is '1',.......)  just a position where we put the 'X' (if x =1)
        system("cls");
        display(matrix);
        if (horizontal(matrix, 'X') || vertical(matrix, 'X') || diagonals(matrix, 'X'))
        {
            printf("%s win", str);
            return 1;
        }
        temp++;
        if (temp == 9)
            break;
        y = input(str2);
        PutXO(matrix, y + 48, 0);
        system("cls");
        display(matrix);
        if (horizontal(matrix, 'O') || vertical(matrix, 'O') || diagonals(matrix, 'O'))
        {
            printf("%s win", str2);
            return 1;
        }
    }
    return 0;
}
void PutXO(char matrix[][3], char p, int S)
{
    int i, j, k = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == p)
            {
                k++;
                break;
            }
        }
        if (k > 0)
            break;
    }
    if (S == 0)
        matrix[i][j] = 79;
    else
        matrix[i][j] = 88;
}
int horizontal(char matrix[][3], char symbol) // check horizental matching
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        k = 0;
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == symbol)
                k++;
        }
        if (k == 3)
            return 1;
    }
    return 0;
}
int vertical(char matrix[][3], char symbol) // check vertical matching
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        k = 0;
        for (j = 0; j < 3; j++)
        {
            if (matrix[j][i] == symbol)
                k++;
        }
        if (k == 3)
            return 1;
    }
    return 0;
}
int diagonals(char arr[][3], char symbol)
{
    int i, j, k = 0;
    {

        for (i = 0, j = 0; j < 3; i++, j++)
        {
            if (arr[i][j] == symbol)
                k++;
        }
        if (k == 3)
            return 1;
        k = 0;
        for (i = 0, j = 2; i < 3; i++, j--)
        {
            if (arr[i][j] == symbol)
                k++;
        }
        if (k == 3)
            return 1;
    }
    return 0;
}
int PlayWithComputer(char matrix[][3]) // another section for Playwith computer codeing
{
    char str[30];
    int temp;
    char Q;
    printf("Player Name: ");
    fgets(str, 30, stdin);
    if (strlen(str) < 29)
        str[strlen(str) - 1] = '\0';
    printf("Your Turn(X)\n");
    printf("Opponent Turn(0)\n");

    display(matrix);
    int x, y;
    for (temp = 0; temp < 9; temp++)
    {

        x = input(str);
        PutXO(matrix, x + 48, 1); // x+ 48 = '1' (x is a position+ 48 then it is is a characters which is '1',.......)  just a position where we put the 'X' (if x =1)
        system("cls");
        display(matrix);
        if (horizontal(matrix, 'X') || vertical(matrix, 'X') || diagonals(matrix, 'X'))
        {
            printf("%s win", str);
            return 1;
        }
        temp++;
        if (temp == 9)
            break;

        /// Computer code
        printf("###########################################\n");
        printf("Computer's turn \n");
        system("cls");
        display(matrix);
        // if (temp <= 2)
        // { // This is for random number genarate only one time
        //     srand(time(NULL));
        //     y = rand() % 10;
        //     while (!(hash(y)))
        //         y = rand() % 10;
        //     PutXO(matrix, y + 48, 0);
        // }
        // else 
        if (Horizontal_checking(matrix, &Q, 'O') || Vertical_checking(matrix, &Q, 'O') || Digonal_checking(matrix, &Q, 'O'))
        {
            PutXO(matrix, Q, 0);
        }
        else if(Horizontal_checking(matrix, &Q, 'X') || Vertical_checking(matrix, &Q, 'X') || Digonal_checking(matrix, &Q, 'X')){
            PutXO(matrix, Q, 0);
        }else{
            srand(time(NULL));
            y = rand() % 10;
            while (!(hash(y)))
                y = rand() % 10;
            PutXO(matrix, y + 48, 0);
        }
        

        system("cls");
        display(matrix);
        if (horizontal(matrix, 'O') || vertical(matrix, 'O') || diagonals(matrix, 'O'))
        {
            printf("Computer win");
            return 1;
        }
    }
    return 0;
}
int Horizontal_checking(char matrix[][3], char *p, char Symbol)
{
    int k = 0, l = 0;
    char symbol2;
    if (Symbol == 'X')
        symbol2 = 'O';
    else
        symbol2 = 'X';
    int i, j;
    for (i = 0; i < 3; i++)
    {
        k = 0, l = 0;
        free(p);
        for (j = 0; j < 3; j++)
        {
            if (matrix[i][j] == Symbol)
                k++;
            else if (matrix[i][j] != symbol2)
            {
                l++;
                *p = matrix[i][j];
            }
        }
        if (k == 2 && l == 1)
            return 1;
    }
    return 0;
}
int Vertical_checking(char matrix[][3], char *p, char Symbol)
{
    int k = 0, l = 0;
    char symbol2;
    if (Symbol == 'X')
        symbol2 = 'O';
    else
        symbol2 = 'X';
    int i, j;
    for (i = 0; i < 3; i++)
    {
        k = 0, l = 0;
        free(p);
        for (j = 0; j < 3; j++)
        {
            if (matrix[j][i] == Symbol)
                k++;
            else if (matrix[j][i] != symbol2)
            {
                l++;
                *p = matrix[j][i];
            }
        }
        if (k == 2 && l == 1)
            return 1;
    }
    return 0;
}
int Digonal_checking(char matrix[][3], char *p, char Symbol)
{
    int k = 0, l = 0;
    char symbol2;
    if (Symbol == 'X')
        symbol2 = 'O';
    else
        symbol2 = 'X';
    int i, j;
    {
        for (i = 0, j = 0; j < 3; i++, j++)
        {

            if (matrix[i][j] == Symbol)
                k++;
            else if (matrix[i][j] != symbol2)
            {
                l++;
                *p = matrix[i][j];
            }
            if (k == 2 && l == 1)
                return 1;
        }
        k = 0, l = 0;
        free(p);
        for (i = 0, j = 2; i < 3; i++, j--)
        {

            if (matrix[i][j] == Symbol)
                k++;
            else if (matrix[i][j] != symbol2)
            {
                l++;
                *p = matrix[i][j];
            }
            if (k == 2 && l == 1)
                return 1;
        }
    }
    return 0;
}
int PlayWithEvilComputer(char matrix[][3])
{
    char str[30];
    int temp;
    char Q;
    printf("Player Name: ");
    fgets(str, 30, stdin);
    if (strlen(str) < 29)
        str[strlen(str) - 1] = '\0';
    printf("Your Turn(X)\n");
    printf("Opponent Turn(0)\n");
    display(matrix);

    int x, y,H,V,D;
    for (temp = 0; temp < 9; temp++)
    {

        x = input(str);
        PutXO(matrix, x + 48, 1); // x+ 48 = '1' (x is a position+ 48 then it is is a characters which is '1',.......)  just a position where we put the 'X' (if x =1)
        system("cls");
        display(matrix);
        if (horizontal(matrix, 'X') || vertical(matrix, 'X') || diagonals(matrix, 'X'))
        {
            printf("%s win", str);
            return 1;
        }
        temp++;
        if (temp == 9)
            break;

        /// Computer code
        printf("###########################################\n");
        printf("Computer's turn \n");
        system("cls");
        display(matrix);
        if (Horizontal_checking(matrix, &Q, 'O') || Vertical_checking(matrix, &Q, 'O') || Digonal_checking(matrix, &Q, 'O'))
        {
            PutXO(matrix, Q, 0);
        }else if((H=Horizontal_checking(matrix, &Q, 'X'))||(V=Vertical_checking(matrix, &Q, 'X'))||(D=Digonal_checking(matrix, &Q, 'X'))){
            if (Horizontal_checking(matrix, &Q, 'X'))
                PutXO(matrix, Q, 0);
            if (Vertical_checking(matrix, &Q, 'X'))
                PutXO(matrix, Q, 0);
            if (Digonal_checking(matrix, &Q, 'X'))
                PutXO(matrix, Q, 0);
        }else{
            srand(time(NULL));
            y = rand() % 10;
            while (!(hash(y)))
                y = rand() % 10;
            PutXO(matrix, y + 48, 0);
        }
        system("cls");
        display(matrix);
        if (horizontal(matrix, 'O') || vertical(matrix, 'O') || diagonals(matrix, 'O'))
        {
            printf("Computer win");
            return 1;
        }
    }
    return 0;
}