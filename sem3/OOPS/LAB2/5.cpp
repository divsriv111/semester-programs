#include<iostream>
#include<conio.h>
using namespace std;
struct engine{
	char srno[3];
	int yom;
	char mat[10];
	int quan;
}a[10];
void print(int l)
{
	int i;
	cout<<"\nFollowings are the entered data\n";
	for(i=0;i<l;i++)
	{
		
		cout<<"\nserial number : "<<a[i].srno;
		cout<<"\nyear of manufacture : "<<a[i].yom;
		cout<<"\nMaterial used : "<<a[i].mat;
		cout<<"\nQuantity : "<<a[i].quan;
		cout<<"\n\n";
	}	
}
int main()
{
	int i=0,l=0;
	char ch;
	while(1)
	{
		cout<<"\nEnter serial number\n";
		cin>>a[i].srno;
		cout<<"\nEnter year of manufacture";
		cin>>a[i].yom;
		cout<<"\nEnter material used";
		cin>>a[i].mat;
		cout<<"\nEnter Quantity";
		cin>>a[i].quan;
		l++;
		cout<<"\nDo you want to continue (y/n) ?\n";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;
		else i++;
	}
	print(l);
	getch();
	return 0;
}
