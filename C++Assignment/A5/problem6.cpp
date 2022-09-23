#include <iostream>
#include <string.h>
using namespace std;
class CString{
    private:
        char * str1;
    public:
        CString(char *str){
            strcpy(str1,str);
        }
        void operator+(CString str){
            cout<<strcat(str1,str.str1)<<endl;
        }
        void operator==(CString str){
            if(strcmp(str1,str.str1)==0)
                cout<<"Strings are same"<<endl;
            else 
                cout<<"Strings are not same"<<endl;

        }
};
int main(){
    char  str1[] ="sujan";
    CString c1(str1),c2(str1);
    c1+c2;
    c1==c2;
    return 0;
}