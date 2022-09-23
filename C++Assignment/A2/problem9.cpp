#include <iostream>
using namespace std;

int maximum(int, int);
float maximum(float, float);

int main()
{
    cout << "maximum number " << maximum(5, 7) << endl;
    cout << "maximum number " << maximum(5.7f, 7.5);
}
int maximum(int num1, int num2)
{
    return (num1 >= num2) ? num1 : num2;
}
float maximum(float num1, float num2)
{
    return (num1 >= num2) ? num1 : num2;
}
