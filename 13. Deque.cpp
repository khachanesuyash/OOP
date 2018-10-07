#include <iostream>
#include<list>
using namespace std;

class deque
{
	list <int> l;
	int a,n;
public:
	void pushfront()
	{
		cout<<"\n Enter elements:";
		cin>>a;
		l.push_front(a);
	}

	void pushback()
	{
		cout<<"\n Enter elements in stack:";
		cin>>a;
		l.push_back(a);
	}

	void popfront()
	{
		cout<<"\n Popping : "<<l.front();
		l.pop_front();
	}

	void popback()
	{
		cout<<"\n Popping : "<<l.back();
		l.pop_back();
	}

	void front()
	{
		cout<<"\nFront element is: "<< l.back();
	}

	void back()
	{
		cout<<"\nBack element is: "<<l.front();
	}

	void display()
	{
		list<int>::iterator i;
		for(i=l.begin();i!=l.end();++i)
			cout<<" "<<*i;
		cout<<"\n";
	}
};
int main() {
	deque q;
	int ch;
	do{
		cout<<"\n1.Push Front";
		cout<<"\n2.Push Back";
		cout<<"\n3.Pop Front";
		cout<<"\n4.Pop Back";
		cout<<"\n5.Front element";
		cout<<"\n6.Last Element";
		cout<<"\n7.Display";
		cout<<"\n8.Exit";
		cout<<"\n Enter your Choice ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			q.pushfront();
			break;
		case 2:
			q.pushback();
			break;
		case 3:
			q.popfront();
			break;
		case 4:
			q.popback();
			break;
		case 5:
			q.front();
			break;
		case 6:
			q.back();
			break;
		case 7:
			q.display();
			break;
		}
	}while(ch!=8);
	return 0;
}
