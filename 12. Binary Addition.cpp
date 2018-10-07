#include<iostream>
#include<stack>
using namespace std;

class binadd
{
    stack<bool> s1,s2,res;
    int n;
public:
    void read();
    void add();
};

void binadd :: read()
{
    int a;
    cout<<"\nEnter No. of bits : ";
    cin>>n;
    cout<<"\nEnter binary number 1 ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s1.push(a);
    }
    cout<<"\nEnter binary number 2 ";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s2.push(a);
    }
}

void binadd :: add()
{
    bool add=0,carry=0,d1,d2;
    for(int i=0;i<n;i++)
    {
        d1=s1.top();
        s1.pop();
        d2=s2.top();
        s2.pop();
        add=d1^d2^carry;
        carry=(d1&d2)|(carry&(d1|d2));
        res.push(add);
    }
    res.push(carry);
    cout<<"\nAddition is : ";
    while(!res.empty())
    {
        cout<<res.top();
        res.pop();
    }
}

int main()
{
    binadd a;
    a.read();
    a.add();
    return 0;
}