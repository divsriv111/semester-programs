#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch,x;
	string fname,mname,lname;
	unsigned long empno;
	ofstream file("data7.txt");
	while(1)
	{	
		cout<<"\nEnter the first name\n";
		cin>>fname;
		cout<<"\nEnter the middle name\n";
		cin>>mname;
		cout<<"\nEnter the last name\n";
		cin>>lname;
		cout<<"\nEnter the emp no\n";
		cin>>empno;
		file<<fname<<' '<<mname<<' '<<lname<<' '<<empno<<endl;
		cout<<"\nDo you want to contine?(y/n)\n";
		cin>>ch;
		if(ch=='n'||ch=='N')
			break;
	}
	file.close();
	ifstream file1("data7.txt");
	cout<<endl<<"\nReading from file\n";
	while(file1>>fname>>mname>>lname>>empno)
	{	
		cout<<endl<<fname<<' '<<mname<<' '<<lname<<' '<<empno<<endl;
	}
	file1.close();
	getch();
	return 0;
}
