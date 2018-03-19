#include<stdio.h>
#include<conio.h>
float add(float x,float y);		//declaration of functions//
float subs(float x,float y);
float mult(float x,float y);
float div(float x,float y);
int main()
{
	float p,a,b;
	char ch;
	
	printf("Enter two numbers\n");
	scanf("%f%f",&a,&b);
	
	printf("Enter your choice-\na)-Addition\nb)-Substraction\nc)Multiplication\nd)-Division\n");
	scanf(" %c",&ch);
	
	switch(ch)				//swich case to decide the function//
	{
		case 'a':
		p=add(a,b);
		printf("%f",p);
		break;
		
		case 'b':
		p=subs(a,b);
		printf("%f",p);
		break;
		
		case 'c':
		p=mult(a,b);
		printf("%f",p);
		break;
		
		case 'd':
		p=div(a,b);
		printf("%f",p);
		break;
		
		default:
		printf("Invalid enteries\n");
	}
	getch();
	return 0;
}
float add(float x,float y)
{
	int c,a,b;
	c=x+y;
	return (c);
}

float subs(float x,float y)
{
	int c,a,b;
	c=x-y;
	return (c);
}

float mult(float x,float y)
{
	int c,a,b;
	c=x*y;
	return (c);
}

float div(float x,float y)
{
	int a,b;
	float c;
	c=x/y;
	return (c);
}

