#include <iostream>
using namespace std;
class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance(){

        }
        Distance(int Feet,int Inches){
            feet=Feet;
            inches=Inches;
        }
        void operator()(int a,int b,int c){
            feet=a+c+5;
            inches=a+b+15;
        }
        void display(){
            cout<<"feet = "<<feet<<" inches = "<<inches<<endl;
        }

};
int main(){
    Distance d1(5,4);
    d1(6,7,8);
    d1.display();
    return 0;
}