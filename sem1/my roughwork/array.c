//programe to calculate the average marks of the class using array

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,marks[29],avg,sum=0;
	
	for(i=0;i<=29;i++)
	{
	printf("enter the marks\n");
	scanf("%d",&marks[i]);
	
	sum=sum+marks[i];
	}
	avg=sum/30;
	
	printf("Average marks of the class is=%d",avg);
	
	if(avg<50)
	printf("\class performance is not good\n");
	else
	printf("class performance is good");
	
	getch();
	return 1;
}
	
