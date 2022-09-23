#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3] = {0};

public:
    void setData();
    void negate();
    void showData();
};
void Matrix::negate()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = -a[i][j];
        }
    }
}
void Matrix::setData()
{
    cout << "Enter matrix elements[3 x 3]: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}
int main()
{
    Matrix m1;
    m1.setData();
    cout<<"Matrix is:"<<endl;
    m1.showData();
    m1.negate();
    cout<<"Matrix is:"<<endl;
    m1.showData();
    return 0;
}
void Matrix::showData(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}