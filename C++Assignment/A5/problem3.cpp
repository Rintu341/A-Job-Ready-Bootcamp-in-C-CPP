#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(){}//Default constructor
        Complex(int a,int b){
            real =a;
            imaginary =b;
        }
        friend Complex operator+(Complex,Complex);
        void showData(){
            cout<<"real = "<<real<<" imaginary = "<<imaginary<<endl;
        }
};

Complex operator+(Complex v,Complex p){ //this is non member function that's why it takes two argument(non-member function cannot access member of a class).
    Complex x;
    x.real=p.real+v.real;
    x.imaginary=p.imaginary+v.imaginary;
    return x;
}
int main(){
    Complex c1(6,7),c2(3,8),c3;
    c3=c1+c2; //
    c3.showData();
    return 0;
}