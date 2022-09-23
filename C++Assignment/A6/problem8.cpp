#include <iostream>
using namespace std;
class Coordinate{
    private:
        int x,y,z;
    public:
        Coordinate(Coordinate &X){
            x=X.x;
            y=X.y;
            z=X.z;
        }
        Coordinate(){
            //Default Constructor
        }
        Coordinate(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void setData(int a,int b,int c){
            x=a;
            y=b;
            z=c;
        }
        void operator=(Coordinate p){
            x=p.x;
            y=p.y;
            z=p.z;
        }
        void getData(){
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        Coordinate & operator,(Coordinate &c1);
};
Coordinate & Coordinate:: operator,(Coordinate &c1){//refuurence pass
    return c1;
}
int main(){
    /*
    int a,b;
    a=(2,3,4);
    b=2,3,4;
    cout<<a<<" "<<b<<endl;
    ///////////////////
    int a,b,c,d;
    d=(a=1,b=2,c=3,a+b+c);
    cout<<d<<endl;
    */
    Coordinate c1(3,5,2),c2,c4;
    c2.setData(8,1,9);
    // c4.setData(7,9,5);
    // Coordinate c3=(c1,c2,c4);
    cout<<"Operator comma is working: "<<endl;
    Coordinate c3=(c1,c2);
    c3.getData();
   return 0;
}