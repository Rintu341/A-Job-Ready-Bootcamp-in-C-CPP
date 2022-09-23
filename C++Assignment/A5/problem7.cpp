#include <iostream>
using namespace std;
class Fraction{
    private:
        long numerator;
        long denumerator;
    public:
        Fraction(){
            numerator=denumerator=0;
        }
        Fraction operator++(){
            numerator++;
            denumerator++;
            return *this;
        }
        Fraction operator++(int useless){
            Fraction temp=*this;
            ++numerator;
            ++denumerator;
            return temp;
        }
        friend void operator<<(ostream &out,Fraction & K){
            cout<<K.numerator<<"/"<<K.denumerator<<endl;
            
        }
        friend void operator>>(istream &in,Fraction &K){
            cout<<"Numerator    : ";
            // K.setNumerator();
            in>>K.numerator;
            cout<<endl<<"Denumerator    : ";
            in>>K.denumerator;
            cout<<endl;
        }
        
        
};
int main(){
    Fraction f1,f2;
    cout<<"f1: ";
    cout<<f1;
    cout<<"f2: ";
    cout<<f2;
    cout<<"Enter 1st Fraction Values : "<<endl;
    cin>>f1;

    f1++;
    cout<<"f1 : ";
    cout<<f1;
    ++f1;
    cout<<"f1 : ";
    cout<<f1;

    cout<<"Enter 2nd Fraction Values : "<<endl;
    cin>>f2;
    cout<<"f2 = ++f1"<<endl;
    f2 = ++f1;

    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;

    cout<<endl;
    cout<<"f2 = f1++"<<endl;
    f2=f1++;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    
    return 0;
}