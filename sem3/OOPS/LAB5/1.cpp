#include<iostream>
#include<conio.h>
using namespace std;
class bacc{
	char dname[15];
	char type[10];
	int ano;
	long bal;
	public:
		void getinfo()
		{
			cout<<"Enter Name of Depositor\n";
			cin>>dname;
			cout<<"\nEnter Account No\n";
			cin>>ano;
			cout<<"\nEnter type of Account- Regular or Current\n";
			cin>>type;
			cout<<"\nEnter Balance\n";
			cin>>bal;
		}
		void deposit()
		{
			long ch;
			cout<<"\nenter amount to be deposited\n";
			cin>>ch;
			bal=bal+ch;
			cout<<"\ndeposit successfull!! your current balance is : "<<bal<<endl;
		}
		void withdraw()
		{
			long ch;
			loop:cout<<"\nEnter amount to be withdrawn\n";
			cin>>ch;
			if(ch>bal)
			{
				cout<<"Invalid amount!! Amount exceeds the balance. Try again.\n";
				goto loop;
			}
			else {
				bal=bal-ch;
			cout<<"\ndeposit successfull!! your current balance is : "<<bal<<endl;	}
		}
		void display()
		{
			cout<<"\nName of dipositor: "<<dname<<endl;
			cout<<"\nAccount type     : "<<type<<endl;
			cout<<"\nAvailable Balnce : "<<bal<<endl;
		}
	
};
int main()
{
	bacc ob;
	int ch;
	ob.getinfo();
	cout<<"Enter your choice\n1)Deposit\n2)withdraw\n3)view balance\n4)exit\n";
	cin>>ch;
	switch (ch)
		{
			case 1:
				ob.deposit();
				break;
			case 2:
				ob.withdraw();
				break;
			case 3:
				ob.display();
				break;
			case 4:
				return 0;
		}
		getch();
	return 0;
}
