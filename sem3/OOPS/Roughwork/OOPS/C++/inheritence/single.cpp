#include<iostream>   	//Example of SINGLE inheritance//
#include<conio.h>
using namespace std;
class EmployeeDetail{				//base class
	protected:
		char ename[20];
		int ecode;
	public:
		void geteDetail()
		{
			cout<<"Enter Employee's' Name"<<endl;
			cin>>ename;
			cout<<"Enter Employee's' Code's"<<endl;
			cin>>ecode;
		}
};
class showDetail : public EmployeeDetail{					//class EmployeeDetail inherited, derived class
	public:
		void show()
		{
			cout<<"Employee's' Name : "<<ename<<endl;
			cout<<"Employee's' Code's : "<<ecode<<endl;
		}
};
int main()
{
	showDetail ob;
	ob.geteDetail();
	ob.show();
	getch();
	return 0;
}
