#include <iostream>
using namespace std;

class product{
            int a;
            int b;
    public:
        product(){
            
        }
        void setData(int x,int y){
            a=x;
            b=y;
        }
        int getA(){
            return a;
        }
        int getB(){
            return b;
        }
        void display(){
            cout<<a<<" "<<b<<endl;
        }
};
class Item{
        int p;
        int q;
    public:
        Item(){

        }
        void display(){
            cout<<p<<" "<<q<<endl;
        }
        Item(product p1){
            p=p1.getA();
            q=p1.getB();
        }
};
int main(){
    Item i1;
    product p1;
    p1.setData(3,4);
    i1=p1;
    i1.display();
    return 0;
}