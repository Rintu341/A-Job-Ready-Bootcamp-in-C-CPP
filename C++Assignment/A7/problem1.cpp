#include <iostream>
using namespace std;

class Complex{
        int real;
        int img;
    public:
        Complex(int x){
            real=x;
            img=x;
        }
        Complex(){

        }
        void display(){
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }
};
int main(){
    Complex c1;
    int X = 8;
    c1=8; //==> primitive type to user-define Data type (Complex type)
    c1.display();
    return 0;
}