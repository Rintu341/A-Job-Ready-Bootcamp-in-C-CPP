#include <stdio.h>
#include <conio.h>
#include <math.h>
float find_angle(int x, int y, int c, int X, int Y, int C);
int main()
{
    // printf("Angle between two Straight line = %f", find_angle(5, 1, -3, 2, 3, 1));
    // find_angle(5, 1, -3, 2, 3, 1);
    printf("\n%f",tan(1.0));
}
float find_angle(int x, int y, int c, int X, int Y, int C)
{
    float m1, m2;
    m1 = (-(x) / y);
    m2 = (-(X) / Y);
    //    float mod=fmod((m1-m2),1+m1*m2);
    printf("\n %lf",tan(fmod(m1 - m2, 1 + m1 * m2)));
}