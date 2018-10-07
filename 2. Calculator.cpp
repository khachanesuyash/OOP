#include <iostream>
using namespace std;

class Number
{
        int n1,n2;
public:
        char optr;
        void accept();
        void addition();
        void subtraction();
        void multiplication();
        void division();
};

void Number :: accept()
{
        cout<<"\n Enter command as number1 operator number2:";
        cin>> n1>> optr>> n2;
}

void Number :: addition()
{
        int sum;
        sum=n1+n2;//calculates sum
        cout<<"\nAddition is:"<<sum;
}

void Number :: subtraction()
{
        int sub;
        sub=n1-n2;//Calculates subtraction
        cout<<"\nSubtraction is:"<<sub;
}

void Number :: multiplication()
{
        int mul;
        mul=n1*n2;//calculates multiplication
        cout<<"\nMultiplication is:"<<mul;
}

void Number :: division()
{
        int div;
        div=n1/n2;//calculates division
        cout<<"\nDivision is:"<<div;
}

int main()
{
        Number n;//object creation
        n.accept();
        switch(n.optr)
         {
        case '+':
                n.addition();
                break;
        case '-':
                n.subtraction();
                break;
        case '*':
                n.multiplication();
                break;
        case '/':
                n.division();
                break;
        default:
                cout<<"Invalid operator";
         }
    return 0;
}