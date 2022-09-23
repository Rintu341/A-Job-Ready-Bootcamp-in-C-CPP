#include <iostream>
using namespace std;
class Complex 
{
private: 
    
    int real;
    int imaginary;

public:
    Complex(){
         cout<<"sujan"<<endl;
    }
    void setValue(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }
    Complex operator+(Complex X){
        Complex Y;
        Y.real=real+X.real;
        Y.imaginary=imaginary+X.imaginary;
        return Y; //returning Object
    }
    Complex operator-(Complex X){

    }
    ~Complex(){ //distructor
        cout<<"By";
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setValue(3,5);
    c2.setValue(4,5);
    c3=c1+c2;// call by object
    c3.display();
}