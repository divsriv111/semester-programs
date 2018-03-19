#include<stdio.h>
#include<math.h>
void main()
{
float r,rc;
int a,b,h,re,ch;
printf("enter choice 1. area of circle \n 2.perimeter of circle \n3. area of square \n 4.perimeter of square\n 5.area of triangle \n 6.perimeter of triangle");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter radius");
		  scanf("%f",&r);
		  rc=2*3.14* r*r;
		  printf("area of cicle is %f",rc);
break;
case 2: printf("enter radius");
		  scanf("%f",&r);
			rc=2*3.14*r;
		 printf("the perimetr of cirlce is %f",rc);
 break;
 case 3:printf("enter  side");
			scanf("%d",&a);
		  re=a*a;
		 printf("area of square is%d",re);
break;
case 4: printf("enter  side");
		  scanf("%d",&a);
		  re= 4*a;
		  printf("the perimeter is %d",re);
 break;
 case 5: printf("enter base and height");
			scanf("%d%d",&b,&h);
		  re= 0.5*b*h;
		  printf("the area of triangle is%d",re);
 break;
 case 6:  printf("enter three sides of triangle");
			 scanf("%d%d%d",&a,&b,&h);
			 re=a+b+h;
          printf("the perimeter of triangle is%d",re);
 break;
 default : printf("invalid choice");
break;
  }
  }
