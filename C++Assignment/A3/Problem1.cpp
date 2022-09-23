#include <iostream>
using namespace std;
class Complex //class and stucture always difine in before main
{
private: // private member variabe can only access by its own member function
    
    int real;
    int imaginary;

public:
    /*
     That functions are instance member funation
    */
    void setValue(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
};
int main()
{
    Complex C;
    C.setValue(3,6);
    C.display();
    return 0;
}

