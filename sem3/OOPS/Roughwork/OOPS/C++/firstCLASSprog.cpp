#include<iostream>
using namespace std;
float a,b;
class arth{
	private:
		int sum,pro;
	public:
		void input()
		{
			cout<<"\nENTER first number\n";
			cin>>a;
			cout<<"\nENTer 2nd number\n";
			cin>>b;
		}
		float add()
		{
			sum=a+b;
			return sum;
		}
		float multi()
		{
			pro=a*b;
			return pro;
		}
};
int main()
{
	arth obj;
	int n;
	obj.input();
	cout<<endl;
	cout<<"Enter choice\n1)addition\n2)MULtiplication\n";
	cin>>n;
	if(n==1)
	cout<<"SUM IS="<<obj.add();
	else if(n==2)
	cout<<"PRODUCT IS="<<obj.multi();
	
}
