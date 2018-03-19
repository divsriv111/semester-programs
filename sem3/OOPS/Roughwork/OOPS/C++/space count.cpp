#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int main()
{
	char a[MAX];
	int ch=0,space=0,i=0,l=0;
	cin.getline(a,MAX);
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		space++;
		l++;
		i++;
	}
	cout<<"characters "<<l<<"\n";
	cout<<"space "<<space;
	getch();
	return 0;
}
