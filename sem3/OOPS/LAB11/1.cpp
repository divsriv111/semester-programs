#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int code;
	double cost;
	ofstream object("list.txt");
	cout<<"Enter Name,code,cost\n Enter Ctrl+Z when done!\n";
	while(cin>>name>>code>>cost)
	{
		object<<name<<"			"<<code<<"			"<<cost<<endl;
	}
	object.close();
	ifstream read("list.txt");
	cout<<"\nNAME			CODE			COST"<<endl;
	while(read>>name>>code>>cost)
	{
		cout<<name<<"		"<<code<<"			"<<cost<<endl;
	}
	read.close();
	getch();
	return 0;
}
