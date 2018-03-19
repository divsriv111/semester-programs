#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char c;
	ofstream file("data1.txt");
	while(1)
	{
		cin.get(c);
		if(c=='\n')
		break;
		c=c+2;
		file<<c;
	}
	file.close();
	ifstream file1("data1.txt");
	cout<<endl<<"ENCRYTING FILE\n";
	while(file1.get(c))
	{	
		cout.put(c);
	}
	file1.close();
	getch();
	return 0;
}
