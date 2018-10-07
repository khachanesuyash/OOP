#include<iostream>
#include<cstring>
using namespace std;

int main(){
    void test(int,string,float,char);
    string city;
    int age;
    char vehicle;
    float salary;
    cout<<"\nEnter Age : ";
    cin>>age;
    cout<<"\nEnter City : ";
    cin>>city;
    cout<<"\nEnter Salary : ";
    cin>>salary;
    cout<<"\nEnter Vehicle : ";
    cin>>vehicle;
    test(age,city,salary,vehicle);
}
void test(int age,string city,float salary,char vehicle)
{
    try{
        if(age<=18 || age>=55)
            throw(age);
        if((city!="Pune" && city!="pune" && city!="PUNE") || (city!="Mumbai" && city!="mumbai" && city!="MUMBAI") || (city!="Bangalore" && city!="bangalore" && city!="BANGALORE") || (city!="Chennai" && city!="chennai" && city!="CHENNAI"))
            throw(city);
        if(salary<50000 || salary>100000)
            throw(salary);
        if(vehicle!=4 || vehicle!=2)
            throw(vehicle);
        }
    catch(int age)
    {   cout<<"\nException due to age"; }
    catch(string city)
    {   cout<<"\nException due to city"; }
    catch(float salary)
    {   cout<<"\nException due to salary"; }
    catch(char vehicle)
    {   cout<<"\nException due to vehicle"; }
}