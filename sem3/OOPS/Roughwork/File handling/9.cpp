#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch[1000],c,temp[1000];
	ofstream file1("data9.txt");
	ofstream file2("data9_2.txt");
	cin.getline(ch,1000,'\n');	
	file1<<ch;
	file1.close();
	cout<<endl<<"COPYING FILE\n";
	
	ifstream file_read("data9.txt");
	file_read.getline(temp,1000);
	file2<<temp;
	cout<<endl<<temp;
	file2.close();
	file_read.close();
	getch();
	return 0;
}
