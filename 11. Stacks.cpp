#include<iostream>
#include<list>
using namespace std;

class stack
{
    list<int> l;
public:
    void push();
    void pop();
    void top();
    void display();
};

void stack :: push()
{
    int a;
    cout<<"\nEnter the Element : ";
    cin>>a;
    l.push_back(a);
}

void stack :: pop()
{
    cout<<"\nElement Popped : "<<l.back();
    l.pop_back();
}

void stack :: top()
{
    cout<<"\nTop Element is : "<<l.back();
}

void stack :: display()
{
    list<int> :: iterator i;
    for(i=l.begin();i!=l.end();++i)
        cout<<" "<<*i;
    cout<<"\n";
}

int main(){
    int ch;
    stack s;
    do{
        cout<<"\n1. Push Element ";
        cout<<"\n2. Pop Element ";
        cout<<"\n3. Top Element ";
        cout<<"\n4. Display Stack ";
        cout<<"\n5. Exit ";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.top(); break;
            case 4: s.display(); break;
        }
    }while(ch!=5);
  return 0;
}