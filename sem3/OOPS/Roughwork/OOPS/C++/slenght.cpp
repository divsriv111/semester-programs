#include<iostream>
#include<conio.h>
using namespace std;
int slenght(char a[])
{
	int i=0,l=0;
	while(a[i]!='\0')
	{
		l++;
		i++;
	}
	return l;
}
int main()
{
	char a[10],b[10];
	cout<<"String";
	cin>>a;
	cout<<endl;
	cout<<"string1 lenght="<<slenght(a);
	return 0;
}
