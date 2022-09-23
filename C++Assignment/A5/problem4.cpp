#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time operator>>(Time t)
    {   
        cout << "-------------------" << endl;
        cout << "Hour: ";
        cin >> t.hour;
        cout << "Minute: ";
        cin >> t.minute;
        cout << "Second: ";
        cin >> t.second;
        return t;
    }
    void operator<<(Time);
    int operator==(Time);
};

int main()
{
    Time t1, t2;
    cout << "Enter First Time" << endl;
    t1=t1>>t1;
    cout<<endl<<"First time"<<endl;
    t1<<t1;
    cout << "Enter Second Time" << endl;
    t2=t2>>t2;
    cout<<endl<<"Second time"<<endl;
    t2<<t2;
    if(t1==t2){
        cout<<"Time are same";
    }else{
        cout<<"time not same";
    }
    return 0;
}

void Time::operator<<(Time p)
{
    cout << "Hour " << p.hour << endl;
    cout << "Minute " << p.minute << endl;
    cout << "Second " << p.second << endl;
}
int Time::operator==(Time p)
{
    if (hour == p.hour && minute == p.minute && second == p.second)
        return 1;
    else
        return 0;
}