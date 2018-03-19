#include<stdio.h>
#include<conio.h>
void main()
{
	int d;int i=2;
	while(i>0)
	{
	printf("\nEnter no. of days plz\n");
	scanf("%d",&d);
if(d<=5)
printf("Fine is=\t%f",(d*0.5));
if(d>5&&d<=10)
 {
	float pip= 5*0.5+(d-5);
	printf("Fine is=\t%f",pip);
 }
if(d>10&&d<31)
 {
		float pop=5*0.5+5+(d-10)*5;
		printf("Fine is=\t%f",pop);
 }
 else if(d>31) 
 printf("membership cancelled");
	getch();
}

}
