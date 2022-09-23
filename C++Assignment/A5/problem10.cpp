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
    Matrix operator+(Matrix);
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
int main(){
    Matrix m1,m2,m3;
    m1.setData();
    m2.setData();
    cout<<"First Matrix: "<<endl;
    m1.showData();
    cout<<"Second Matrix: "<<endl;
    m2.showData();
    m3=m1+m2;
    m3.showData();
    return 0;
}
Matrix Matrix::operator+(Matrix p){
    Matrix X;
    cout<<"Addition of Matrix"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            X.a[i][j]=a[i][j]+p.a[i][j];
        }
    }
    return X;
}
void Matrix::showData(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
}