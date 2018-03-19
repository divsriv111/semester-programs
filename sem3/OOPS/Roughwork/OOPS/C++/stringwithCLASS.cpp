#include<iostream>
#include<conio.h>
#define MAX 50
using namespace std;
char a[20],b[20],c[MAX];;
class stringOpt{
	private:
		int i,l,temp,sum=0;
	public:
		void input()
		{
			cout<<"Enter the string\n";
			gets(a);
		}
		
		int stringlen(char a[])
		{
			i=0;
			l=0;
			while(a[i]!='\0')
			{
				i++;
				l++;
			}
			return l;
		}
		
		void stringcpy(char b[],char a[])
		{
			i=0;
			while(a[i]!='\0')
			{
				b[i]=a[i];
				i++;
			}
		}
		
		void stringconc(char a[],char b[])
		{
			temp=stringlen(a);
			for(i=0;a[i]!='\0';i++)
			c[i]=a[i];
			for(i=0;b[i]!='\0';i++)
			c[temp+i]=b[i];
			
		}
		
		int stringcamp(char a[],char b[])
		{
			for(i=0;a[i]!='\0'||b[i]!='\0';i++)
			sum=sum+(a[i]-b[i]);
			return sum;
		}
		
};
int main()
{
	stringOpt o1;
	int x,y;
	o1.input();
	cout<<"\n"<<"Enter your choice\n"<<"1)String lenght\n"<<"2)String Copy\n"<<"3)String Concatenation\n"<<"4)String Compare\n";
	cin>>x;
	
	if(x==1)
	cout<<"\nSTRING LENGHT = "<<o1.stringlen(a);
	else if(x==2)
	{
		o1.stringcpy(b,a);
		cout<<"\n"<<puts(b);
	}
	else if(x==3)
	{
		cout<<"\nENter string 2\n";
		cin>>b;
		o1.stringconc(a,b);
		puts(c);
	}
	else if(x==4)
	{
		cout<<"\nENter string 2\n";
		cin>>b;
		y=o1.stringcamp(a,b);
		if(y!=0)
		cout<<"\nNot SAme\n";
		else cout<<"\nSAME";
	}
	else cout<<"\nINVALID INPUT!!!";
	getch();
	return 0;
}
