#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
	{
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;	
	}
	void set()
	{
		cout<<"enter id = ";
		cin>>id;
		cout<<"enter name = ";
		cin>>name;
		cout<<"enter role = ";
		cin>>role;
	}
};
class B : public A
{
	public :
	void set1()
	{
		cout<<"enter salary = ";
		cin>>salary;
		cout<<"enter experience = ";
		cin>>experience;	
	}
};
class C :public A,public B
{
	public :
	void set2()
	{
		cout<<"enter comp_name = ";
		cin>>comp_name;
		cout<<"enter address = ";
		cin>>address;
	}	
	void get()1
	{
		cout<<"id = "<<id<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"role = "<<role<<endl;
	}
};
class D : public A,public B,public C
{
	public :
	void set3()
	{
		cout<<"enter email = "<<endl;
		cout<<"enter contact = "<<endl;
	}	
	void get2()
	{
		
	}
}
