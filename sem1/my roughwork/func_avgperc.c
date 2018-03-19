#include<stdio.h>
void function(int *,float *);
int main()
{
	int avg;
	float perc;
	function(&avg,&perc);
	printf("Avarage marks is=%d\nPErcentage=%f",avg,perc);
	return 0;
	
}
void function(int *avg,float *perc)
{
	int a,b,c;
	printf("Enter the marks\n");
	scanf("%d%d%d",&a,&b,&c);
	*avg=(a+b+c)/3;
	*perc=*avg*100;
}
