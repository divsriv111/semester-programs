#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct process{
int at;
int bt;
}arr[20];
int n,short1=100;
typedef struct process pro;
int shortest_ar(int short1)
{
	int i,temp;
	for(i=0;i<n;i++)
	{
		if(short1<arr[i].at)
		{short1=arr[i].at;
		temp=i;}
	}
	return temp;
}
void main()
{
int i,j,time=0,comp[20];
printf("Enter number of processes\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter arrival time for process p%d :",i);
scanf("%d",&arr[i].at);
printf("\nEnter burst time for process p%d :",i);
scanf("%d",&arr[i].bt);
}
	for(i=0;i<n;i++)
	{
	j=shortest_ar(short1);	
	time=time+arr[j].bt;
	comp[j]=time;
	}
	for(i=0;i<n;i++)
	{
	printf("\n%d",comp[i]);
	}
	getch();
}
