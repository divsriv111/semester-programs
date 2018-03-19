#include<stdio.h>
#include<conio.h>
struct data
{
 int roll,year;
 char name[100],depart[100],course[100];
}s[100];
void func(int n)
{
 int i,j,k,l;
 for(i=0;i<n;i++)
 {
  printf("%d",s[i].year);
	for(j=0;j<n;j++)
	{
	 if(s[i].year==s[j].year)
	 {
	  printf("%s\n",s[j].name);
	 }
	}
  }
 }
void search(int h,int n)
{int i;
 for(i=0;i<n;i++)
 {
  if(s[i].roll==h)
  {
	printf("%d   %d   %s   %s   %s   ",s[i].roll,s[i].year,s[i].name,s[i].depart,s[i].course);
  }
 }
}
void main()
{
 int i,j,k,l;
 int n;
 printf("how many records you want to enter ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter the roll number , year of joining , name ,department and the couse \n");
  scanf("%d%d%s%s%s",&s[i].roll,&s[i].year,&s[i].name,&s[i].depart,&s[i].course);
 }
 func(n);
 printf("enter the roll number to be searched ");
 scanf("%d",l);
 search(l,n);
}
