#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ACC 12345
using namespace std;

float bal=500000;
char PIN[]={'1','2','3','4'};
class balance{
	public:
		int showbalance()
		{
			int a;
			cout<<"\nYour Current Main Balance is : "<<bal<<endl;
			cout<<"\nPress 0 to Return To Main Menu or 9 to Exit.\n";
			cin>>a;
			return a;
		}
};
class deposite:public balance{
	private:
		float deposite;
	public:
		void depositefunc(float x)
		{
			deposite=x;
			bal=bal+deposite;
			
		}
};
class withdraw:public balance{
	private:
		float amt;
	public:
		void withdrawfunc(float x)
		{
			amt=x;
			bal=bal-x;
		}
};
class auth{
	private:
		int acc=ACC;
	public:
		int authfunc()
		{
			int a,k=0;
			char c,b[4];
			while(1)
			{
				cout<<"\n\nEnter your account Number: press 00 to exit\n";
				cin>>a;
				if(a==00)
				break;
				if(a==acc)
				{
					cout<<"\nEnter PIN\n";
					while(1)
					{
						if(k<0)
						k=0;
						c=getch();
						if(c==13)
						{
							b[k]='\0';
							break;
						}
						if(c=='\b')
						{
							cout<<"\b";
							k--;
							continue;
						}
						b[k++]=c;
						c='*';
						putch(c);
						continue;
					}
					if(!strcmp(b,PIN))
					{
						return 1;
						break;
					}
					else
					cout<<"\nInvalid Account Number or PIN!!! Please Try Again\a\n";
				}
			else
			cout<<"\nAccount Not Found! Please try Agian\a\n";
		}
	}
		
};
int main()
{
	auth ob1;
	withdraw ob2;
	deposite ob3;
	int flag,choice,balr,ch,i;
	float amt;
	int a[5]={5000,10000,15000,20000,25000};
	while(1)
	{
	system("cls");
	cout<<"\n\t\t\t\t\t\tWELCOME!\n";
	flag=ob1.authfunc();
	if(flag==1)
	{
		cout<<"\nWELCOME Mr. XYZ!\nChoose the Service From The Following Option\n";
	LOOP:cout<<"1) View Account Balnace\n2) Withdarw Cash\n3) Deposite Cash\n4)Exit\n";
		cin>>choice;
		switch (choice)
			{
				case 1:
					balr=ob2.showbalance();
					if(balr==0)
					goto LOOP;
					break;
				case 2:
				LOOP1:cout<<"\nManual(1) or Use Express(2) Withdrawal?\n"; 
					cin>>ch;
					if(ch==1)
					{
						cout<<"Enter Amount Witihin 50,000\n";
						cin>>amt;
					if(amt<=50000)
						{
							if(bal<amt)
						{
							cout<<"\nTransaction Failed! Insufficient Balanace! Try Again\a\n";
							goto LOOP1;
						}	else
							{cout<<"\nWithdrawal Successfull!!\a\n";
							bal=bal-amt;
							cout<<"Your Current Balance is : "<<bal<<endl;
							cout<<"\n Return To Main Menu? (1/0)\n";
							cin>>ch;
							if(ch==1)
							goto LOOP;}
						}
						else
						{
							cout<<"\nInvalid Amount, Please Try Again!\a\n";
							goto LOOP1;
						}
					}
					else if(ch==2)
					{
						cout<<"\n1)5000\n2)10000\n3)15000\n4)20000\n5)25000\n";
						cin>>i;
						cout<<"\nWithdrawal Successfull!!\a\n";
							bal=bal-a[i];
							cout<<"Your Current Balance is : "<<bal<<endl;
							cout<<"\n Return To Main Menu? (1/0)\n";
							cin>>ch;
							if(ch==1)
							goto LOOP;
						
					}
					break;
				case 3:
					LOOP2:cout<<"Enter Amount Witihin 50,000\n";
						cin>>amt;
						if(amt<=50000)
						{
							cout<<"\nDeposition Successfull!!\a\n";
							bal=bal+amt;
							cout<<"Your Current Balance is : "<<bal<<endl;
							cout<<"\n Return To Main Menu? (1/0)\n";
							cin>>ch;
							if(ch==1)
							goto LOOP;
						}
						else
						{
						cout<<"\nInvalid Amount! Please try Again\a\n";
						goto LOOP2;
						}
						break;
				case 4:
					cout<<"\n\t\tTHANK YOU FOR USING OUR ATM SERVICE\n";
					return 0;
					break;
				default: cout<<"\nInvalid Entry!! Please try Again\n";
						goto LOOP;
						break;
					
			}
	}
	}
	getch();
}
