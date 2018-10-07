#include<iostream>
#include<fstream>
using namespace std;

int main() {
        int id;
        string name;
        float price;
        string author;
        
        cout<<"\n Enter id : ";
        cin>>id;
        cout<<"\n Enter name of book : ";
        cin>>name;
        cout<<"\n Enter the price : ";
        cin>>price;
        cout<<"\n Enter author name : ";
        cin>>author;
        
        ofstream out("book1");
        out<<id<<" "<<name<<" "<<price<<" "<<author;
        out.close();
        
        ifstream in ("book1");
        in>>id>>name>>price>>author;
        in.close();
        
        cout<<"the content display : ";
        cout<<id<<" "<<name<<" "<<price<<" "<<author;

    return 0;
}