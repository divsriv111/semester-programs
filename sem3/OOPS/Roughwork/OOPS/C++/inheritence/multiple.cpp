#include<iostream>   	//Example of MUlTIPLE inheritance//
#include<conio.h>
using namespace std;
class EmployeeDetail{					//base class
	protected:
		char ename[20];
		int ecode;
	public:
		void getDetailofEmp()
		{
			cout<<"Enter Employee's' Name"<<endl;
			cin>>ename;
			cout<<"Enter Employee's' Code's"<<endl;
			cin>>ecode;
		}
};
class ManagerDetail{					//base class
	protected:
		char mname[20];
		int mcode;
	public:
		void getDetailofMan()
		{
			cout<<"Enter Manager's' Name"<<endl;
			cin>>mname;
			cout<<"Enter Manager's' Code's"<<endl;
			cin>>mcode;
		}
};


class showDetail : public EmployeeDetail, public ManagerDetail{					//class EmployeeDetail inherited, Derived class
	public:
		void show()
		{
			cout<<"Employee's' Name : "<<ename<<endl;
			cout<<"Employee's' Code's : "<<ecode<<endl;
			cout<<"Employee Works Under\n";
			cout<<"Manager's' Name : "<<mname<<endl;
			cout<<"Manager's' Code's : "<<mcode<<endl;
		}
};
int main()
{
	showDetail ob;
	ob.getDetailofEmp();
	ob.getDetailofMan();
	cout<<"\n\n";
	ob.show();
	getch();
	return 0;
}
