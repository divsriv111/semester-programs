#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
static float charge=4.75;
class nightclub{
	int tno,pno;
	char sname[10];
	public:
		nightclub(int a=5,int b=4)
		{
			tno=a;
			pno=b;
			strcpy(sname,"XYZ");
		}
		void show()
		{
			cout<<"\nServer's name : "<<sname;
			cout<<"\nTable number is : "<<tno;
			cout<<"\nTotal number of patrons : "<<pno;	
		}
		static void showdata();
		
};
void nightclub::showdata()
{
			cout<<"\nFixed charges per table is "<<charge<<"$\n";
}
int main()
{
	nightclub ob;
	ob.show();
	nightclub showdata();
	getch();
	return 0;
}
