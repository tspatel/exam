#include<iostream>
#include<string.h>
using namespace std;
class method{
	public :
	int t,x;
	void truck()
	{
		cout<<"truck is running."<<endl;
	}
	void truck(int t)
	{
		cout<<"truck speed "<<"km"<<endl;
	}
	void truck(int t,int x)
	{
		cout<<"truck weight "<<"kg"<<endl;
		cout<<"truck speed "<<"km"<<endl;
	}
	void truck(int t,int x,int y)
	{
		cout<<"truck weight "<<"kg"<<endl;
		cout<<"truck speed "<<"km"<<endl;
		cout<<"truck load "<<"kg"<<endl;
	}
};
int main()
{
	method m;
	
	m.truck();
	m.truck(50);
	m.truck(500,50);
	m.truck(500,50,100);
}
