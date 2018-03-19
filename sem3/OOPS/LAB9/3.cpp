#include<iostream>
#include<conio.h>
using namespace std;
class student{
	string in_name,degree;
	public:
		void getdata()
		{
			cout<<"\nEnter Name of institution\n";
			cin>>in_name;
			cout<<"\nHighest qualification?\n";
			cin>>degree;
		}
		void showdata(){
			cout<<"\nName of institute: "<<in_name<<endl;
			cout<<"Higest Qualification is :"<<degree<<endl;
		}
};
class employee:public student{
	string ename;
	int enumb;
	public:
		void getdata()
		{
			student::getdata();
			cout<<"\nEnter Name of Employee\n";
			cin>>ename;
			cout<<"\nEmployee Number?\n";
			cin>>enumb;
		}
		void showdata(){
			student::showdata();
			cout<<"\nName of Employee: "<<ename<<endl;
			cout<<"Employee Number :"<<enumb<<endl;
		}	
};
class manager:public employee{
	string title;
	float dues;
	public:
		void getdata()
		{	employee::getdata();
			cout<<"\nEnter Title\n";
			cin>>title;
			cout<<"\nDues?\n";
			cin>>dues;
		}
		void showdata(){
			employee::showdata();
			cout<<"\nTitle: "<<title<<endl;
			cout<<"Dues :"<<dues<<endl;
		}
};
class scientist:public employee{
	int publi;
	public:
		void getdata()
		{	employee::getdata();
			cout<<"\nEnter Number of publications of Scientist\n";
			cin>>publi;
		}
		void showdata(){
			employee::showdata();
			cout<<"\nNumber of publications of Scientist: "<<publi<<endl;
		}	
};
class labour:public employee{
	string lname;
	public:
		void getdata()
		{	employee::getdata();
			cout<<"\nName Labour's name\n";
			cin>>lname;
		}
		void showdata(){
			employee::showdata();
			cout<<"\nLabour's name: "<<lname<<endl;
		}
};
int main()
{
	manager ob1;
	scientist ob2;
	labour ob3;
	int ch;
	cout<<"1)Manager\n2)Scientist\n3)Labour\n";
	cin>>ch;
	if(ch==1)
	{ob1.getdata();
	ob1.showdata();}
	else if(ch==2)
	{
		ob2.getdata();
		ob2.showdata();
	}
	else if(ch==3)
	{
		ob3.getdata();
		ob3.showdata();
	}
	else 
	{
		cout<<"\nInvalid Choice";
	}
	getch();
	return 0;
}
