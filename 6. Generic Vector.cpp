#include<iostream>
using namespace std;

template<class T>
class vector
{
    T a[20];
    int n;
public:
    void read()
    {
        cout<<"\nEnter No. of Elements : ";
        cin>>n;
        cout<<"\nEnter Elements : ";
        for(int i=0;i<n;i++)
            cin>>a[i];
    }
    
    void display()
    {
        cout<<"\nEntered Elements : ";
        cout<<" ( ";
        for(int i=0;i<n;i++)
            cout<<a[i]<<" , ";
        cout<<" ) ";
    }
    
    void modify()
    {
        T m;
        int flag;
        cout<<"\nEnter The Location to be modified : ";
        cin>>m;
        for(int i=0;i<n;i++)
        {
            flag=0;
            if(a[i]==m)
            {
                cout<<"\nEnter the new value : ";
                cin>>a[i];
                flag=1;
            }
        }
        if(flag!=1)
            cout<<"\nElement not found";
    }
    
    void multiply()
    {
        T c;
        cout<<"\nEnter the scalar with which you want to multiply : ";
        cin>>c;
        for(int i=0;i<n;i++)
            a[i]=c*a[i];
    }
};

template<class T>
void menu(vector<T> v)
{
    int ch;
    do{
        cout<<"\n1. Read";
        cout<<"\n2. Display";
        cout<<"\n3. Modify";
        cout<<"\n4. Multiply";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                v.read();
                break;
            case 2:
                v.display();
                break;
            case 3:
                v.modify();
                break;
            case 4:
                v.multiply();
                break;
        }            
    }while(ch!=5);
}

int main()
{
    int ch1;
    do{
        cout<<"\n1. Int";
        cout<<"\n2. Float";
        cout<<"\n3. Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch1;
        switch(ch1)
        {
            case 1:
                vector<int> v1;
                menu(v1);
                break;
            case 2:
                vector<float> v2;
                menu(v2);
                break;
        }
    }while(ch1!=3);
}