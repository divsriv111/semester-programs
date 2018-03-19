#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,rev=0,rev1=0,dig;
	cin>>n;
	while(n!=0)
	{
		dig=n%10;
		if(dig==9)
		dig=-1;
		rev=dig+1+rev*10;
		n=n/10;
	}
	while(rev!=0)
	{
		dig=rev%10;
		rev1=dig+rev1*10;
		rev=rev/10;	
	}
	cout<<endl<<rev1;
	getch();
	return 0;
}
