#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ex[1000];
	char ch,ch1;
	ofstream write("test.txt");
	cout<<"Enter String\nWhen done press Ctrl+Z to quit\n";
	cin.getline(ex,1000);
	write<<ex;
	write.close();
	ifstream read("test.txt");
	while(read)
	{
		read.get(ch);
		read.get(ch1);
		if(ch1==' '&& ch==' ')
		cout<<ch;
		else
		cout<<ch<<ch1;
	}
	read.close();
	getch();
	return 0;
}
