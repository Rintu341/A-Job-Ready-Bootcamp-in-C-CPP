#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
            long  y=x,rev=0;
        if(0>x)
            return false;
        else{
            while(x!=0){
                rev=rev*10+x%10;
                x=x/10;
            }
        }
            if(y==rev)
                    return true;
            else
                    return false;
    }
};
int main(){
    Solution s1;
    if(s1.isPalindrome(1000000001))
        cout<<"True";
    else
        cout<<"False";

    return 0;
}