#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class file{
	public:
		struct student{
			string name;
			int roll;
		}s;
		fstream f;
		void wapp(int x)
		{
			if(x==0)
			{
			f.open("record.txt",ios::out);
			cout<<"\nEnter The Name\n";
			cin>>s.name;
			cout<<"\nEnter The Roll\n";
			cin>>s.roll;
			f.write((char*)&s,sizeof(s));
			f.close();
			}
			else
			{
			f.open("record.txt",ios::app);
			cout<<"\nEnter The Name\n";
			cin>>s.name;
			cout<<"\nEnter The Roll\n";
			cin>>s.roll;
			f.write((char*)&s,sizeof(s));
			f.close();
			}
		}
		
		void read()
		{
			f.open("record.txt",ios::in);
			if(f.fail())
			{cout<<"\nFile Not Found\n";
			return;}
			while(f.read((char*)&s,sizeof(s)))
			{
			cout<<"\nRoll = "<<s.roll<<endl;
			cout<<"\nName = "<<s.name<<endl;
			if(f.eof())
			{
				cout<<"\nENd Of Record\n";
				break;
			}
			}f.close();
		}
};
int main()
{
	int x=0,ch;
	file ob;
	while(1)
	{
	cout<<"Enter Choice\n";
	LOOP:cout<<"1)Write/Append\n2)Read\n3)Search\n4)Exit\n";
	cin>>ch;
	switch (ch)
		{
			case 1:
				ob.wapp(x);
				x++;
				break;
			case 2:
				ob.read();
				break;
			case 4:
				return 0;
			default :
			cout<<"Invalid Entry! Try Again\n";
			goto LOOP;
		}
	

	}
	getch();
	return 0;
}
