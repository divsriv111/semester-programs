#include<stdio.h>
#include<conio.h>
void div(int,int);
int main()
{
	int a,b;
	float c;
	printf("Enter the 1st number\n");
	scanf("%d",&a);
	printf("Enter the 2nd number\n");
	scanf("%d",&b);
	div(a,b);
	getch();
	return(0);	
}
void div(int x,int y)
{
    float f=0.0;
    int r=0;
	int s=x>y?x:y;
	while(s!=0)
	{
		s=s-(x<y?x:y);
		f++;
		if(s<0)
		{
			r=s+(x<y?x:y);
			printf("Q = %f \n",(--f));
			printf("R = %d \n",r);break;
		}
	}
	if(r==0)
	{
		printf("Q = %f \n",f);
		printf("R = %d \n",r);
	}
}

