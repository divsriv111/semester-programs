#include<iostream>
#include<conio.h>
using namespace std;
class Distance{
	int feet,inch;
	public:
		Distance()
		{
			feet=inch=0;
		}
		void get_data()
		{
			cout<<"Enter the height-feet and inches";
			cin>>feet>>inch;
			feet=feet+inch/12;
			inch=inch%12;
		}
		void display()
		{
			cout<<feet<<" 'feet "<<inch<<" \"inches";
		}
		void operator -()
		{
			if(inch-2>=0)
			if(feet-2>=0)
			{
				feet=feet-2;
				inch=inch-2;
			}
			if(inch-2<0)
			{
				inch=12;
				feet--;
			}
		}
		void operator +()
		{
			feet+=2;
			inch+=2;
			if(inch+2>12)
			inch=inch%12;			
		}
		void operator +=(Distance ob1)
		{
			feet+=ob1.feet;
			inch+=ob1.inch;
			if(inch>12)
			inch=inch%12;
		}
		void operator -=(Distance ob1)
		{
			feet-=ob1.feet;
			inch-=ob1.inch;
			if(inch<0)
			{
				if(--feet!=0)
				{
					feet--;
					-(inch);
				}
				
			}
		}
		int operator >(Distance ob)
		{
			if(feet>ob.feet&&inch>ob.inch)
			{
				return 1;
			}
			else return 0;
		}
		int operator <(Distance ob)
		{
			if(feet<ob.feet&&inch<ob.inch)
			{
				return 1;
			}
			else return 0;
		}
};
int main()
{
	Distance ob1,ob2;
	cout<<"For object 1\n";
	ob1.get_data();
	cout<<"\nFor object 2\n";
	ob2.get_data();
	-ob1;
	+ob2;
	cout<<"\n - operation on object 1 : ";
	ob1.display();
	cout<<"\n + operation on object 1 : ";
	ob2.display();
	ob1+=ob2;
	cout<<"\n+= operation on object 1 and object 2 : ";
	ob1.display();
	ob1-=ob2;
	cout<<"\n-= operation on object 1 and object 2 : ";
	ob1.display();
	cout<<"\n> operation on object 1 and object 2 : ";
	if(ob1>ob2)
	cout<<"Object 1 is greater\n";
	else
	cout<<"object 2 is greater\n";
	cout<<"\n< operation on object 1 and object 2 : ";
	if(ob2<ob1)
	cout<<"Object 2 is smaller\n";
	else
	cout<<"Object 1 is smaller\n";
	getch();
	return 0;
}
