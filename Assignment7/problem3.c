#include <stdio.h>
#include <conio.h>

int main()
{
    int n1 = 0, n2 = 1;
    int N, S = 0;
    printf("Enter a N team : ");
    scanf("%d", &N);
    if (N == 0)
        printf("number is there in the Fibonacci series ");
    else
    {
        if (N == 1)
            printf("number is there in the Fibonacci series ");
        else
        {
            
            while (S <= N)
            {
                S = n1 + n2;
                n1 = n2;
                n2 = S;
            }
            if (N == S - (n2 - n1))
                printf("number is there in the Fibonacci series ");
            else    
                printf("number is not there in the Fibonacci series ");
                    
        }
    }

    return 0;
}
