#include<iostream>
#include<conio.h>
using namespace std;
struct shirt{
	int collerSize,sleveLen;
	void getdata()
	{
		cout<<"\nEnter coller size\n";
		cin>>collerSize;
		cout<<"\nEnter Sleve lenght\n";
		cin>>sleveLen;
	}
};
struct pants{
	int waistSize,inSeam;
	void getdata()
	{
		cout<<"\nEnter waist size\n";
		cin>>waistSize;
		cout<<"\nEnter inseam\n";
		cin>>inSeam;
	}
};
void displayClothingFacts(shirt ob)
{
	cout<<"\nColler size is : "<<ob.collerSize;
	cout<<"\nSleve lenght is : "<<ob.sleveLen;
}
void displayClothingFacts(pants ob)
{
	cout<<"\nWaist size is : "<<ob.waistSize;
	cout<<"\nInseam : "<<ob.inSeam;
}
int main()
{
	shirt o;
	pants o1;
	o.getdata();
	o1.getdata();
	displayClothingFacts(o);
	displayClothingFacts(o1);
	getch();
	return 0;
}
