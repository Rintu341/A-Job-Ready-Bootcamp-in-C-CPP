#include <iostream>
using namespace std;
class Marks{
        int marks;
    public:
        void display(){
            cout<<"Marks is : "<<marks<<endl;
        }
        void setData(int X){
                marks=X;
        }
        void operator->();
        
};

int main(){
    Marks m1;
    m1.setData(8);
    m1;
    return 0;
}