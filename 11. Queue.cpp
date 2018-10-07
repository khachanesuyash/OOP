#include<iostream>
#include<list>
using namespace std;

class queue
{
    list<int> l;
public:
    void pushback();
    void popfront();
    void front();
    void back();
    void display();
};

void queue :: pushback()
{
    int a;
    cout<<"\nEnter the Element : ";
    cin>>a;
    l.push_back(a);
}

void queue :: popfront()
{
    cout<<"\nElement Popped : "<<l.back();
    l.pop_back();
}

void queue :: front()
{
    cout<<"\nFront Element is : "<<l.back();
}

void queue :: back()
{
    cout<<"\nBack Element is : "<<l.front();
}

void queue :: display()
{
    list<int> :: iterator i;
    for(i=l.begin();i!=l.end();++i)
        cout<<" "<<*i;
    cout<<"\n";
}

int main(){
    int ch;
    queue q;
    do{
        cout<<"\n1. Push Element ";
        cout<<"\n2. Pop Element ";
        cout<<"\n3. Front Element ";
        cout<<"\n4. Rear Element ";
        cout<<"\n5. Display Stack ";
        cout<<"\n6. Exit ";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: q.pushback(); break;
            case 2: q.popfront(); break;
            case 3: q.front(); break;
            case 4: q.back(); break;
            case 5: q.display(); break;
        }
    }while(ch!=6);
  return 0;
}