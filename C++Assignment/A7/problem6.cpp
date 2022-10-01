#include <iostream>
using namespace std;
class Time
{
        int  H;
    public:
        Time(int h){
            // cout<<"Pc called "<<endl;
            H=h;
        }
        void display()
        {
            cout<<"Duration in seconds "<<H<<endl;
        }

};
int main(){
    int duration;
    cout<<"Enter Duration in minutes "<<endl;
    cin>>duration;
    Time t1 =duration * 60;
    t1.display();
    return 0;
}