#include<iostream>
#include<cstring>
using namespace std;


template<class T>
class array
{
    T a[20];
    int n;
public:
    void read()
    {
        cout<<"\nEnter no. of Elements : ";
        cin>>n;
        cout<<"\nEnter Elements : ";
        for(int i=0;i<n;i++)
            cin>>a[i];
    }
    void display()
    {
        cout<<"{";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" , ";
            cout<<"}";
    }
    void swap(T &a,T &b)
    {
        T temp=a;
        a=b;
        b=temp;
    }

    void abubble_sort()
    {
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
            }
        }
    }
    void dbubble_sort()
    {
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]<a[j+1])
                    swap(a[j],a[j+1]);
            }
        }
    }
    
};
template<class T>
void menu(array<T> a)
{
    int ch;
    do{
        cout<<"\n**********Bubble Sort**********";
        cout<<"\n1. Read Numbers";
        cout<<"\n2. Display Numbers";
        cout<<"\n3. Sort in Ascending Order";
        cout<<"\n4. Sort in Descending Order";
        cout<<"\n5. Exit";
        cout<<"\nEnter Your Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                a.read();
                break;
            case 2:
                a.display();
                break;
            case 3:
                a.abubble_sort();
                a.display();
                break;
            case 4:
                a.dbubble_sort();
                a.display();
                break;
        }
    }while(ch!=5);
}

int main(){
    int ch1;
    do{
        cout<<"\nEnter Data Type";
        cout<<"\n1. Integers ";
        cout<<"\n1. Float ";
        cout<<"\n3. Exit ";
        cout<<"\nEnter your choice : ";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
                array<int> a1;
                menu(a1);
                break;
            case 2:
                array<float> a2;
                menu(a2);
                break;
        }
    }while(ch1!=3);
}