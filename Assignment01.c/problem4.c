#include <stdio.h>
#include <conio.h>

int main(){
    float pi=3.142;
    float  radius;
    printf("Enter circle Radius\n");
    scanf("%f",&radius);
    double Area=pi*radius*radius;
    printf("Area of circle is %f having the radius %f",Area,radius);
    return 0;
}