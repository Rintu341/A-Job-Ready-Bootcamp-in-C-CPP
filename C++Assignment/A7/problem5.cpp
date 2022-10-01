#include <iostream>
using namespace std;
class invent2{
        float p;
        float q;
    public:
        void display()
        {
            cout<<p<<" "<<q<<endl;
        }
        void setP(int x)
        {
            p=x;
        }
        void setQ(int x)
        {
            q=x;
        }
};
class invent1{
        float a;
        float b;
    public:
        invent1(float x,float y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<a <<" "<<b<<endl;
        }
        operator float()
        {
            return (a+b);
        }
        operator invent2()
        {
            invent2 i1;
            i1.setP(a);
            i1.setQ(b);
            return i1;
        }
};

int main(){
    invent1 s1(4,5);
    invent2 d1;
    float tv;
    tv=s1; // Invent1 to float 
    d1=s1; //Invent1 to Invent2 type
    d1.display();
    return 0;
}