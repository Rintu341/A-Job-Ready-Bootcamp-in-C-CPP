#include <iostream>
using namespace std;
class Minute{
        int  minute;
    public:
        void display(){
            cout<<"minutes = "<<minute<<endl;
        }
        void setMinute(int x){
            minute=x;
        }
        Minute(){
            minute =0;
        }
};
class Time{
        int hour;
        int minute;
    public:
        Time(int a,int b){
            hour=a;
            minute=b;
        }
        
        void display(){
            cout<<"hour = "<<hour<<" minute = "<<minute<<endl;
        }
        operator Minute(){
            Minute m1;
            m1.setMinute(60*hour+minute);
            return m1;
        }
};

int main(){
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;// Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}