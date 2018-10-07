#include <iostream>
#include<cstring>
using namespace std;

class Student
{
        int rno=cnt;
        static int cnt;

        string name;
        string class1;
        char div;
        string DOB;
        string Bgroup;
        string address;
        string licenseNO;
        long long int telephone;


public:
        Student();
        Student(string,string,string,string,string,long long int);
        Student(Student &obj);
        void accept();
        void display();
        static void getnoofstud()
        {   cout<<"number of Students="<<cnt; }
};

int Student::cnt=1;
Student::Student()
{
    rno=cnt;
    name="Suyash";
    class1="SE";
    div='A';
    DOB="15/03/1999";
    Bgroup="O+";
    address="Nashik";
    licenseNO="MH/2345/9876543";
    telephone=9175660126;
    cnt++;
}

Student::Student(string name1,string DOB1,string Bgroup1,string address1,string licenseNO1,long long int telephone1)
{
    rno=cnt;
    name=name1;
    class1="SE";
    div='A';
    DOB=DOB1;
    Bgroup=Bgroup1;
    address=address1;
    licenseNO=licenseNO1;
    telephone=telephone1;
    cnt++;
}

Student::Student(Student & obj)
{
        rno=cnt;
        name=obj.name;
        class1=obj.class1;
        div=obj.div;
        DOB=obj.DOB;
        Bgroup=obj.Bgroup;
        address=obj.address;
        licenseNO=obj.licenseNO;
        telephone=obj.telephone;
        
}

void Student::accept()
{
    cout<<"\nEnter the Name : ";
    cin>>name;
    cout<<"\nEnter the Class : ";
    cin>>class1;
    cout <<"\nEnter the Division : ";
    cin>>div;
    cout<<"\nEnter Date of Birth : ";
    cin>>DOB;
    cout<<"\nEnter Blood Group : ";
    cin>>Bgroup;
    cout<<"\nEnter Address : ";
    cin>>address;
    cout<<"\nEnter License no. : ";
    cin>>licenseNO;
    cout<<"\nEnter Telephone no. : ";
}
void Student::display()

{
    cout<<"\nRoll No is : "<<rno<<"\nName is : "<<name<<"\nClass is : "<<class1<<"\nDivision is : "<<div<<"\nDate of Birth : "<<DOB<<"\nBgroup is : "<<Bgroup<<"\nAddress is : "<<address<<"\nLicense no. is : "<<licenseNO<<"\nTelephone no is : "<<telephone;
}

int main() {
        Student s1;
        s1.display();
        Student s2("Sukya","17/9/1999","A+","Pune","MH/9876/123456",9876789012);
        s2.display();
        Student s3;
        s3.accept();
        Student s4(s3);
        s4.display();
        Student getnoofstud();
        return 0;
}