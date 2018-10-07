#include <iostream>
using namespace std;

class personal
{
    string name;
    string address;
    long long int phoneno;
public:
    void accept();
    void display();
};
class professional
{
    string department;
    string designation;
    float salary;
public:
    void accept();
    void display();
};

class academic
{
    string degree;
    float percentage;
public:
    void accept();
    void display();
};

class biodata: private personal,private professional, private academic
{
public:
    void accept();
    void display();
};
void personal::accept()
{
    cout<<"\nEnter your Name:";
    cin>>name;
    cout<<"\nEnter your Address:";
    cin>>address;
    cout<<"\nEnter your Phone no.:";
    cin>>phoneno;
}

void professional::accept()
{
    cout<<"\nEnter your Department:";
    cin>>department;
    cout<<"\nEnter your Designation:";
    cin>>designation;
    cout<<"\nEnter your Salary:";
    cin>>salary;
}

void academic::accept()
{
    cout<<"\nEnter your Degree:";
    cin>>degree;
    cout<<"\nEnter your Percentage:";
    cin>>percentage;
}

void personal::display()
{
    cout<<"\nName is:"<<name;
    cout<<"\nAddress is:"<<address<<endl;
    cout<<"\nPhone no. is:"<<phoneno<<endl;
}

void professional::display()
{
    cout<<"\nDepartment is:"<<department<<endl;
    cout<<"\nDesignation is:"<<designation<<endl;
    cout<<"\nSalary is:"<<salary<<endl;
}

void academic::display()
{
    cout<<"\nDegree is:"<<degree<<endl;
    cout<<"\nPercentage is:"<<percentage<<endl;
}

void biodata::accept()
{
    personal::accept();
    professional::accept();
    academic::accept();
}

void biodata::display()
{
    personal::display();
    professional::display();
    academic::display();
}


int main() {
    biodata b;
    b.accept();
    b.display();
  return 0;
}