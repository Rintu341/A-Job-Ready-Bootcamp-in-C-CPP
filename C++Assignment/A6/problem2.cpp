#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(){
            real=0;
            imaginary=0;
        }
        void setData(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        /*
        every clas have this pointer to access caller object(implicitly)
        */
        void display(){
            cout<<"real = "<<real<<" imaginary = "<<imaginary<<endl;
        }
};
int main(){
    Complex c1;
    c1.setData(5,6);
    c1.display();
    return 0;
}