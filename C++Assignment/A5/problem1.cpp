#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void showData()
    {
        cout << real << " + i" << imaginary << endl;
    }
    Complex operator+(Complex X)
    {
        Complex temp;
        temp.real = X.real + real;
        temp.imaginary = X.imaginary + imaginary;
        return temp;
    }
    Complex operator-(Complex X)
    {
        Complex temp;
        temp.real = X.real - real;
        temp.imaginary = X.imaginary - imaginary;
        return temp;
    }
    Complex operator*(Complex X)
    {
        Complex temp;
        temp.real = X.real * real;
        temp.imaginary = X.imaginary * imaginary;
        return temp;
    }
    int operator==(Complex X)
    {
        if (X.real == real && X.imaginary == imaginary)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(3, 6);
    c2.setData(4, 7);
    c3 = c1 + c2;
    Complex c5;
    c5 = c1 - c2;
    Complex c6;
    c6.setData(3, 4);
    if (c6 == c1)
        cout << "same" << endl;
    else
        cout << "Notsame" << endl;
    c3.showData();
    c5.showData();
    return 0;
}
