#include <iostream>
using namespace std;
class Dollar{
        int d;
    public:
        void display(){
            cout<<"Dollar = "<<d<<endl;
        }
        Dollar(){

        }
        Dollar( int x){
            d=x;
        }
};
int main(){
    int x = 50;
    Dollar d;
    d =x;
    d.display();
    return 0;
}