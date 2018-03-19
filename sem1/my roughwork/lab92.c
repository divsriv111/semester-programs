#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float x,y,p=1;
	printf("Enter the value of x and y\n");
	scanf("%f%f",&x,&y);
	for(i=0;i<y;i++)
	p=x*p;
	
	printf("%f to the power %f is=%f",x,y,p);
	getch();
}
