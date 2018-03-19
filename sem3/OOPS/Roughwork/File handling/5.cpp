#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	char str[1000],ch;
	int word=0,space=0,line=0;
	ofstream file("text.txt");
	cin.getline(str,1000,'~');
	file<<str;
	file.close();
	ifstream file2("text.txt");
	while(file2)
	{
		ch=file2.get();
		if(ch=='\n')
		line++;
		if(ch==' ')
		space++;
		else word++;
	}
	setw(15);
	cout<<"words "<<word-1+space;
	setw(15);
	cout<<"\nline "<<line;
	file2.close();
	getch();
	return 0;
}
