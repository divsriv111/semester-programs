#include<iostream>
#include<conio.h>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b,a%b);
}
int lcmfunc(int a,int b)
{
  return (a*b)/gcd(a,b);
}
class rational{
	int p,q,lcm,result;
	public:
		void getdata()
		{
			cout<<"Enter the value of p and q (p/q)";
			cin>>p>>q;
			if(q==0)
			{
				cout<<"Invalid Entry!!, try again!";
				getdata();
			}
		}
		void operator +(rational ob)
		{
			lcm=lcmfunc(q,ob.q);
			p=(p*(lcm/q))+(ob.p*(lcm/ob.q));
			q=lcm;
		}
		void operator -(rational ob)
		{
			lcm=lcmfunc(q,ob.q);
			p=(p*(lcm/q))-(ob.p*(lcm/ob.q));
			q=lcm;
		}
		void operator *(rational ob)
		{
			p=p*ob.p;
			q=q*ob.q;
		}
		void operator /(rational ob)
		{
			p=p*ob.q;
			q=q*ob.p;
		}
		void display()
		{
			cout<<p<<"/"<<q<<"\n";
		}
};
int main()
{
	int ch;
	rational ob1,ob2;
	cout<<"For object 1\n";
	ob1.getdata();
	cout<<"\nFor object 2\n";
	ob2.getdata();
	cout<<"\n enter choice\n1) +\n2) -\n3) *\n4) /\n5) exit";
	cin>>ch;
	switch(ch)
		{
			case 1:
				ob1+ob2;
				ob1.display();
				break;
			case 2:
				ob1-ob2;
				ob1.display();
				break;
			case 3:
				ob1*ob2;
				ob1.display();
				break;
			case 4:
				ob1/ob2;
				ob1.display();
				break;
			case 5:
				return 0;
			default:
				cout<<"\nInvalid choice!!";
		}
		getch();
}
