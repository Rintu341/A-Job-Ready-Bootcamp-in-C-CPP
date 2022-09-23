#include <iostream>
#include <math.h>
using namespace std;

float area(int);
int area(int, int);
// float area(int ,int);//cannot overload functions distinguished by return type alone
int area(int p, float w);

int main()
{
    cout << "area of circle " << area(4) << endl;
    cout << "area of rectangle " << area(4, 6) << endl;
    cout << "area of triangle " << area(3, 8.f);
}
int area(int l, int w)
{
    return l * w;
}
int area(int p, float w)
{
    return (p * w) / 2;
}
float area(int r)
{
    return M_PI * r * r;
}