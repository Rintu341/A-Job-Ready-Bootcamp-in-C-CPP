#include <iostream>
#include <string.h>
using namespace std;
class Mystring
{
private:
    char str[100];

public:
    Mystring()
    {
        strcpy(str, "sujan");
    }
    void setStr()
    {
        cout << "Enter a string: ";
        fgets(str, 100, stdin);
    }
    void operator!();
    void showStr()
    {
        cout << str << endl;
    }
};
void Mystring::operator!()
{
    char str1[100];
    strcpy(str1, str);
    strupr(str1);
    if (strcmp(str1, str))
    {
        cout << "Into Uppercase ";
        strupr(str);
    }
    else
    {
        cout << "Into Lowercase ";
        strlwr(str);
    }
}
int main()
{
    Mystring m1;
    m1.setStr();
    m1.operator!();
    m1.showStr();
    return 0;
}