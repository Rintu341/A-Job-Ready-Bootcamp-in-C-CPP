#include <iostream>
#include <stdlib.h>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    int *p ;
    // = (int *)malloc(sizeof(int));

public:
    /*
        we can define constructor in private also
    */
    Complex(int a, int b,int c)
    { // constructor
        cout << "in paramitterized constuctor" << endl;
        real = a;
        imaginary = b;
        p= (int *)malloc(sizeof(int));
        *p = c;
    }
    Complex()
    { // constructor
        cout << "Default constructor" << endl;
    }
    void setData(int a, int b, int c)
    {
        real = a;
        imaginary = b;
        *p = c;
    }
    Complex(Complex &X){ //deep copy
        cout<<"copy constuctor is called"<<endl;
        real=X.real;
        imaginary=X.imaginary;
        p=(int *)malloc(sizeof(int));
        *p=*(X.p);
    }
    void showData()
    {
        cout << real << " " << imaginary << " " << *p << endl;
    }
    void operator=(Complex &X)
    {   
        // free(p);
        cout << "Assignment operator" << endl;
        real = X.real;
        imaginary = X.imaginary;
        // p=(int*)malloc(sizeof(int));
        p = X.p;
    }
    void change(){
        *p=7;
    }
};
int main()
{
    Complex c2(2, 5,8);
    Complex c3=c2;
    
    c2.showData();
    c3.showData();
    c2.change();
    cout<<endl;
    c2.showData();
    c3.showData();
    return 0;
}