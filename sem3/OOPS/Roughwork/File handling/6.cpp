#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	ifstream file1("source1.txt");
	ifstream file2("source2.txt");
	ofstream file3("source3.txt");
	file1>>x;
	file2>>y;
	while(file1!=0 && file2!=0)
	{
		
		if(x>y)
		{
			file3<<y;
			file1>>x;
		}
		else{
			file3<<x;
			file2>>y;
		}
	}
	if(file1!=0)
	while(file1)
	{
		file1>>x;
		file3<<x;
	}
	else if(file2!=0)
	while(file2)
	{
		file2>>x;
		file3<<x;
	}
	file1.close();
	file2.close();
	file3.close();
	ifstream file4("source3.txt");
	while(file4)
	{
		char ch;
		file4.get(ch);
		cout<<ch;
	}
	file4.close();
	getch();
	return 0;
}
