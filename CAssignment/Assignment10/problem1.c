#include <stdio.h>
#include <conio.h>
#include <math.h>

float area_of_circle(float);
int main(){
    float r,area;
    printf("Enter a redious of a circle: ");
    scanf("%f",&r);
    area=area_of_circle(r);
    printf("Area of a circle is %f ",area);
    return 0;
}
float area_of_circle(float R){

    float Area;
    Area = M_PI*R*R;
    return Area;
}