#include<iostream>
#include<conio.h>
using namespace std;
void xstrcpy(char target[],char source[])
{
int i=0;
	while(source[i]!='\0')
	{
		target[i]=source[i];
		i++;
	}
	target[i]='\0';
}
class EmployeeDetail{
	public:
		char ename[20];
	public:
		void getName()
		{
			cout<<"Enter Employee name \n";
			cin.getline(ename,20);
		}
};
class NOpromotion : public EmployeeDetail{
	public:
	char ename1[20];
	
	public:
		void callname1()
		{
			xstrcpy(ename1,ename);
			cout<<"\nMr."<<ename1<<" has got No Promotion till now\n";
		}
};
class promotion1 : public NOpromotion{
	public:
	char ename2[20];
	
	public:
		void callname2()
		{
			xstrcpy(ename2,ename1);
			cout<<"\nMr."<<ename2<<" has got 1 Promotion till now\n";
		}
};
class promotion2 : public promotion1{
	public:
	char ename3[20];
	
		public:
		void callname3()
		{
			xstrcpy(ename3,ename2);
			cout<<"\nMr."<<ename3<<" has got 2 Promotion till now\n";
		}
};
class promotion3 : public promotion2{
	public:
	char ename4[20];
	
		public:
		void callname4()
		{
			xstrcpy(ename4,ename3);
			cout<<"\nMr."<<ename4<<" has got 3 Promotion till now\n";
		}
};
class promotion4 : public promotion3{
	public:
	char ename5[20];
	
		public:
		void callname5()
		{
			xstrcpy(ename5,ename4);
			cout<<"\nMr."<<ename5<<" has got 4 Promotion till now\n";
		}
};
class promotion5 : public promotion4{
	public:
	char ename6[20];
	
		public:
		void callname6()
		{
			xstrcpy(ename6,ename5);
			cout<<"\nMr."<<ename6<<" has got 5 Promotion till now\n";
		}
};
class promotion6 : public promotion5{
	public:
	char ename7[20];
	
		public:
		void callname7()
		{
			xstrcpy(ename7,ename6);
			cout<<"\nMr."<<ename7<<" has got 6 Promotion till now\n";
		}
};
class retire : public promotion6{
	public:
	char ename8[20];
	
		public:
		void callname8()
		{
			xstrcpy(ename8,ename7);
			cout<<"\nMr."<<ename8<<" has got Retired by Now\n";
		}
};
int main()
{
	int yos;
	retire ob;
	ob.getName();
	cout<<endl<<"Enter year of service\n";
	cin>>yos;
	if(yos>=1&&yos<5)
	ob.callname1();
	
	else if(yos>=5&&yos<10)
	ob.callname2();
	
	else if(yos>=10&&yos<15)
	ob.callname3();
	
	else if(yos>=15&&yos<20)
	ob.callname4();
	
	else if(yos>=20&&yos<25)
	ob.callname5();
	
	else if(yos>=25&&yos<30)
	ob.callname6();
	
	else if(yos>=30&&yos<35)
	ob.callname7();
	
	else
	ob.callname8();
	
	getch();
	return 0;
}
