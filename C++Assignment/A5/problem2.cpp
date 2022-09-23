#include <iostream>
using namespace std;

class Unary{
    private:
        int num;
        
    public:
        Unary(int X){
            num=X;
        }
        void operator++(){
            num++;
        }
        // void operator++(){
        //     num++;
        // }
        void showData(){
            cout<<num<<endl;
        }
};
int main(){
    Unary u1(5);
    u1.showData();
    ++u1;
    u1.showData();
    return 0;
}