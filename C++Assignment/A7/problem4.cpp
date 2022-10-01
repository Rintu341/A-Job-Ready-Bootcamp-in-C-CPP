#include <iostream>
using namespace std;
class Item{
        int p;
        int q;
    public:
        Item(){ //Default Constructor

        }
        
        void setP(int x){
                p=x;
        }
        void setQ(int x){
                q=x;
        }
        void display(){
            cout<<p<<" "<<q<<endl;
        }
        
        
};

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
        operator Item(){
            Item i;
            i.setP(a);
            i.setQ(b);
            return i;
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