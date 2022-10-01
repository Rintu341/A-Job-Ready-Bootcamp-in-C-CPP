#include <iostream>
using namespace std;
class Rupee{
        int R;
    public:
        Rupee(int c){
            R=c;
        }
        Rupee(){

        }
        operator int(){
            return R;
        }
};
int main(){
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}