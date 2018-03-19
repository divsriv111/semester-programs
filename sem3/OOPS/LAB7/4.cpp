#include<iostream>
#include<conio.h>
#define MAX 2
using namespace std;
int i;
class marks{
		public:
		int rollno[MAX],sub1[MAX],sub2[MAX],sub3[MAX];
		void getdata()
		{
			cout<<"\nEnter roll number ";
			cin>>rollno[i];
			cout<<"\nEnter marks of subject 1 ";
			cin>>sub1[i];
			cout<<"\nEnter marks of subject 2 ";
			cin>>sub2[i];
			cout<<"\nEnter marks of subject 3 ";
			cin>>sub3[i];
			i++;
		}
		int maxscore(int a[])
		{
			int ch;
			ch=a[0];
			for(int j=0;j<MAX;j++)
			{
				if(a[j]>ch)
				ch=a[j];		
			}
			for(int i=0;i<MAX;i++)
			if(a[i]==ch)
			return i;
		}
		void b()
		{
			int z;
			z=maxscore(sub1);
			cout<<"\nHighest marks in subject1 is scored by roll no :"<<rollno[z];
			z=maxscore(sub2);
			cout<<"\nHighest marks in subject2 is scored by roll no :"<<rollno[z];
			z=maxscore(sub3);
			cout<<"\nHighest marks in subject3 is scored by roll no :"<<rollno[z];
		}
		int sum(int x)
		{
			return sub1[x]+sub2[x]+sub3[x];
		}
};
int main()
{
	marks s1;
	int sum[MAX];
	for(int i=0;i<MAX;i++)
	s1.getdata();
	for(int i=0;i<MAX;i++)
	sum[i]=s1.sum(i);
	for(int i=0;i<MAX;i++)
	cout<<"\nTotal marks secured by roll no "<<s1.rollno[i]<<" is :"<<sum[i];
	s1.b();
	cout<<"\nRoll no who got highest total is :"<<s1.rollno[s1.maxscore(sum)];
	getch();
	return 0;
}
