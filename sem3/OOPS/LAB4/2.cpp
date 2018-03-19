#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int &r1=a,&r2=b,&r3=c,&r4=d;
	int *pt1=&a,*pt2=&b,*pt3=&c,*pt4=&d;
	int ar[]={r1,r2,r3,r4};
	int *ap[]={pt1,pt2,pt3,pt4};
	cout<<endl<<"Through refrence variables : "<<endl;
	for(int i=0;i<4;i++)
	cout<<ar[i]<<" ";
	cout<<endl;
	cout<<"Through pointer variables : "<<endl;
	for(int i=0;i<4;i++)
	cout<<*ap[i]<<" ";
	cout<<endl;
	getch();
	return 0;
}
