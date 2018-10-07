//============================================================================
// Name        : TELEPHONE.cpp
// Author      : Suyash
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

class Telephone
{
	char name[40];
	long long int phone;
public:
	void getdata();
	void dispdata();
	long long getphone()
	{ return phone; }
	char getname()
	{ return name[40]; }

};

void Telephone :: getdata()
{
	cout<<"\n Enter Name :";
	cin>>name;
	cout<<"\n Enter Telephone Number : ";
	cin>>phone;
}

void Telephone :: dispdata()
{
	cout<<"\n Name : "<<name;
	cout<<"\n Telephone Number : "<<phone;
}

void createfile()
{
	Telephone obj;
	int n,i;
	ofstream out;
	out.open("TD");
	cout<<"\n Enter No of People : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		obj.getdata();
		out.write((char *) &obj,sizeof(obj));
	}
	out.close();
}

void dispfile()
{
	Telephone obj;
	ifstream in;
	in.open("TD");
	while(in)
	{
		in.read((char*) &obj,sizeof(obj));
		if(in.eof()!=0)
			break;
		obj.dispdata();
	}
	in.close();
}

void add()
{
	Telephone obj;
	int n,i;
	ofstream out;
	out.open("TD",ios::app);
	cout<<"\n Enter No of People : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		obj.getdata();
		out.write((char *) &obj,sizeof(obj));
	}
	out.close();
}

void searchphone()
{
	Telephone obj;
	int flag=0;
	long long no;
	cout<<"\n Enter No to search : ";
	cin>>no;
	ifstream in;
	in.open("TD");
	while(in)
	{
		in.read((char*) &obj,sizeof(obj));
		if(in.eof()!=0)
			break;
		if(no==obj.getphone())
		{
			flag =1;
			cout<<"\n Number Found ";
			obj.dispdata();
			break;
		}
	}
	if(flag==0)
		cout<<"\n Number not Found ";
	in.close();
}

void searchname()
{
	Telephone obj;
	int flag=0;
	char name1[40];
	cout<<"\n Enter Name to search : ";
	cin>>name1;
	ifstream in;
	in.open("TD");
	while(in)
	{
		in.read((char*) &obj,sizeof(obj));
		if(in.eof()!=0)
			break;
		if(name1[40]==obj.getname())
		{
			flag =1;
			cout<<"\n Number Found ";
			obj.dispdata();
			break;
		}
	}
	if(flag==0)
		cout<<"\n Number not Found ";
	in.close();
}

void modify()
{
	Telephone obj;
		int flag=0;
		long long no;
		cout<<"\n Enter No to search : ";
		cin>>no;
		fstream in;
		in.open("TD",ios :: in| ios :: out);
		while(in)
		{
			in.read((char*) &obj,sizeof(obj));
			if(in.eof()!=0)
				break;
			if(no==obj.getphone())
			{
				flag =1;
				cout<<"\n Number Found ";
				obj.dispdata();
				int pos=-1*sizeof(obj);
				in.seekp(pos,ios::cur);
				cout<<"\n Update Record";
				obj.getdata();
				in.write((char *) &obj,sizeof(obj));
				break;
			}
		}
		if(flag==0)
			cout<<"\n Number not Found ";
		in.close();
}

int main() {
	int ch;
	do{
		cout<<"\n 1. Create File ";
		cout<<"\n 2. Display File ";
		cout<<"\n 3. Add Record ";
		cout<<"\n 4. Search by Phone No ";
		cout<<"\n 5. Search by Name";
		cout<<"\n 6. Modify the Record";
		cout<<"\n 7. Exit";
		cout<<"\n Enter operation to be performed : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			createfile();
			cout<<"\t File Created ";
			break;
		case 2:
			cout<<"\t File Data ";
			dispfile();
			break;
		case 3:
			add();
			cout<<"\t Record Added ";
			break;
		case 4:
			searchphone();
			break;
		case 5:
			searchname();
			break;
		case 6:
			modify();
			cout<<"\t Record Updated";
			break;
		}
	}while(ch!=7);
	return 0;
}
