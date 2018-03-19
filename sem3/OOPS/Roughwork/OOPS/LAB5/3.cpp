#include<iostream>
#include<conio.h>
using namespace std;
class time{
	int hours,minutes;
	public:
		time ()
		{
			hours=0;
			minutes=0;
		}
		time(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		void putdata()
		{
			cout<<hours<<":"<<minutes<<endl;
		}
		void sumtime(time t1,time t2)
		{
			minutes=t1.minutes+t2.minutes;
			hours=t1.hours+t2.hours+minutes/60;
			hours=hours%24;
			minutes=minutes%60;
		}
};
int main()
{
	time t1(1,39),t2(2,44),t3;
	t3.sumtime(t1,t2);
	t3.putdata();
	return 0;
}
