#include<iostream>
#include<string.h>
using namespace std;
class hotel{
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	int ratting_type;
	char website[100];
	public :
	void set(int id,char name[100],char type[100],int staff_size,int room_size,int establish_year,char address[100],int ratting_type,char website[100])
	{
		this->id = id;
		strcpy(this->name,name);
		strcpy(this->type,type);
		this->staff_size = staff_size;
		this->room_size = room_size;
		this->establish_year = establish_year;
		strcpy(this->address,address);
		this->ratting_type = ratting_type;
		strcpy(this->website,website);
	}
	void get()
	{
		cout<<"id = "<<id<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"type = "<<type<<endl;
		cout<<"staff_size = "<<staff_size<<endl;
		cout<<"room_size = "<<room_size<<endl;
		cout<<"establish_year = "<<establish_year<<endl;
		cout<<"address = "<<address<<endl;
		cout<<"ratting_type = "<<ratting_type<<endl;
		cout<<"website = "<<website<<endl;
	}
};
int main()
{
	hotel h1;
	
	h1.set(4105,"lapita","5",500,300,1980,"dubai",5,"www.lapita.com");
	h1.get();
}
