#include <iostream>
using namespace std;

int add(int, int);
float add(float, float);

int main()
{
    cout << "sum = " << add(5, 7) << endl;
    cout << "sum = " << add(5.7f, 7.5);
}
int add(int num1, int num2)
{
    return num1 + num2;
}
float add(float num1, float num2)
{
    return num1 + num2;
}