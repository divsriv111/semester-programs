#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class abc{
	protected:
	string name;
};
class emp : public abc{
	public:
		void show(string x)
	{
		name=x;
		cout<<name<<endl;
	}
};
class man : public abc{
	public:
		void show(string x)
	{
		name=x;
		cout<<name<<endl;
	}
};
int main()
{
	emp ob1;
	ob1.show("rand");
	man ob2;
	ob2.show("bhosad");
	getch();
	return 0;
}
