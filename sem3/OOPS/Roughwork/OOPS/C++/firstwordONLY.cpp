#include<iostream>
#include<conio.h>
#define MAX 100
using namespace std;
int main()
{
	char a[MAX];
	int i=1;
	cin.getline(a,MAX);
	cout<<a[0];
	while(a[i]!='\0')
	{
		if(a[i]==' '&&a[i+1]!=' ')
		cout<<a[i+1];
		else cout<<" ";
		i++;
	}
	getch();
	return 0;
}
