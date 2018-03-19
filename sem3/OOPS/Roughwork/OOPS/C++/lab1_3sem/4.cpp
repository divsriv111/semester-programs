#include<iostream>
#include<conio.h>
using namespace std;
int xstrlen(char n[])
{
	int i=0;
	while(n[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char n[25];
	cout<<"Enter a String\n";
	cin.getline(n,25);
	cout<<endl<<"String lenght is "<<xstrlen(n);
	getch();
	return 0;
}
