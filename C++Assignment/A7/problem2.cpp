#include <iostream>
using namespace std;

class Complex{
        int real;
        int img;
    public:
        // Complex(int x){ 
        //     real=x;
        //     img=x;
        // }
        Complex(){

        }
        void display(){
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }
        operator int(){
            return real+img;
        }
        void setData(int a,int b){
            real=a;
            img=b;
        }

};
int main(){
    Complex c1;
    c1.setData(3,4);
    int X ;
    X=c1; //==> user-define Data type  to primitive type (Complex type)
    cout<<"X = "<<X<<endl;
    return 0;
}