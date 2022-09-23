#include <iostream>
using namespace std;
class Integer{
    int n;
    public:
    friend int operator!(Integer N){
        return !(N.n);
    }
    Integer(int x){
        n=x;
    }
};
int main(){
    Integer i1(5),i2(0);
    cout<<"First object return "<<!i1<<endl;
    cout<<"Second object return "<<!i2<<endl;

    return 0;
}