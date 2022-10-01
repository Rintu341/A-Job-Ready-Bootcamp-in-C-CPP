#include <iostream>
using namespace std;
class Rupee{
    float r;
    public:
        void display(){
            cout<<"Rupee is "<<r<<endl;
        }
        
        Rupee(float x){
            r=x;
        }
        operator float(){
            return r;
        }
        float getR(){
            return r;
        }
        
        
};
class Dollar{
    float r;
    public:
        void display(){
            cout<<"Dollar is "<<r<<endl;

        }
        Dollar(float x){
            r=x;
        }
        
        operator float(){ //Type casting operator
            return r;
        }
        Dollar(Rupee r1){ //Rupee to Dollar
            r= r1.getR()/100;
        }
        operator Rupee(){//Dollar to Rupee
            return  r*100;
        }
        
};
int main(){
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d;// Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}