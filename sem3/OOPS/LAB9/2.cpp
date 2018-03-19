#include<iostream>
#include<conio.h>
using namespace std;
class staff{
	int code;
	string name;
	public:
		void getdata()
		{
			cout<<"\nEnter Staff's code\n";
			cin>>code;
			cout<<"\nName?\n";
			cin>>name;
		}
		void showdata(){
			cout<<"\nCode: "<<code<<endl;
			cout<<"Staff's Name :"<<name<<endl;
		}
};
class teacher:public staff{
	string sub,pub;
	public:
		void getdata()
		{
			staff::getdata();
			cout<<"\nTeacher's Subject?\n";
			cin>>sub;
			cout<<"\nPublication?\n";
			cin>>pub;
		}
		void showdata(){
			staff::showdata();
			cout<<"\nName of Subject: "<<sub<<endl;
			cout<<"Publisher is :"<<pub<<endl;
		}
};
class typist:public staff{
	int speed;
	public:
		void getdata()
		{
			staff::getdata();
			cout<<"\nTypist's speed?\n";
			cin>>speed;
		}
		void showdata(){
			staff::showdata();
			cout<<"\nTypist's speed: "<<speed<<" wps"<<endl;
		}
};
class officer:public staff{
	char grade;
	public:
		void getdata()
		{
			staff::getdata();
			cout<<"\nEnter Officer's Grade\n";
			cin>>grade;
		}
		void showdata(){
			staff::showdata();
			cout<<"\nOfficer's Grade: "<<grade<<endl;
		}
};
class regular:public typist{
	string name;
	int age;
	public:
		void getdata()
		{
			typist::getdata();
			cout<<"\nEnter Name of Regular worker\n";
			cin>>name;
			cout<<"\nAge?\n";
			cin>>age;
		}
		void showdata(){
			typist::showdata();
			cout<<"\nName of Regular worker: "<<name<<endl;
			cout<<"age :"<<age<<endl;
		}
};
class casual:public typist{
	string name;
	float daily_wages;
	public:
		void getdata()
		{
			typist::getdata();
			cout<<"\nEnter Name of casual worker\n";
			cin>>name;
			cout<<"\nDaily wage?\n";
			cin>>daily_wages;
		}
		void showdata(){
			typist::showdata();
			cout<<"\nName of casual worker: "<<name<<endl;
			cout<<"Daily wage is :"<<daily_wages<<endl;
		}
};
int main()
{
	int ch1,ch2;
	teacher ob1;
	//typist ob2;
	officer ob3;
	cout<<"Enter choice:\n1) Teacher\n2) Typist\n3) Officer\n";
	cin>>ch1;
	if(ch1==1)
	{
		ob1.getdata();
		ob1.showdata();
	}
	else if (ch1==2)
	{
		cout<<"\n1)Regular\n2)Casual?\n";
		cin>>ch2;
		if(ch2==1)
		{
			regular ob4;
			ob4.getdata();
			ob4.showdata();			
		}
		else if(ch2==2)
		{
			casual ob5;
			ob5.getdata();
			ob5.showdata();
		}
		else
		cout<<"\nInvalid choice";
	}
	else if (ch1==2)
	{
		ob3.getdata();
		ob3.showdata();
	}
	else
	cout<<"\nInvalid choice";
	
	getch();
	return 0;
}
