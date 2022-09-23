#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imginary;

public:
    Complex()
    {
        real = 0;
        imginary = 0;
    }
    void setData(int a, int b)
    {
        real = a;
        imginary = b;
    }
    void setValue()
    {
        cout << "real: ";
        cin >> real;
        cout << "imaginary: ";
        cin >> imginary;
    }
    void display(){
        cout<<"Real = "<<real<<" Imaginary = "<<imginary<<endl;
    }
    void operator=(Complex X)
    {   
        cout<<"Assignment operator called"<<endl;
        this->real=X.real;
        this->imginary=X.imginary;
    } 
};
int main()
{
    Complex c1;
    c1.setData(5,8);
    Complex c2;
    c2=c1;
    c2.display();
    return 0;
}