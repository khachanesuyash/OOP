#include <iostream>
using namespace std;

class complex
{
    int real,img;
public:
    friend istream& operator>>(istream&, complex &c);
    friend ostream& operator<<(ostream&, complex c);
    friend complex operator+(complex,complex);
    friend complex operator*(complex,complex);
};

istream& operator>>(istream& din,complex &c)
{
    cout<<"\n Enter Real and Img Parts : ";
    din>>c.real>>c.img;
    return din;
}

ostream& operator<<(ostream& dout, complex c)
{
    dout<<"\n Number is = "<<c.real<<"+"<<c.img<<"i";
    return dout;
}

complex operator+(complex c1,complex c2)
{
    complex a;
    a.real=c1.real+ c2.real;
    a.img=c1.img + c2.img;
    return a;
}

complex operator*(complex c1,complex c2 )
{
    complex a1;
    a1.real= ((c1.real*c2.real)-(c1.img*c2.img));
    a1.img= ((c1.real*c2.img)+ (c1.img * c2.real));
    return a1;
}

int main() {
    complex c1,c2,c3,c4;
    cin>>c1>>c2;
    c3=c1+c2;
    cout<<c3;
    c4=c1*c2;
    cout<<c4;
    return 0;
}