#include<conio.h>
#include<stdio.h>
int main()
{
	
	int l1,h,l2,l3,ch,a;double r;
	printf(" enter a choice \n 1 Area of a Circle \n2 Perimeter of a Circle \n3 Area of a Square \n4 Perimeter of a Square \n5 Area of a tringle \n6 Perimeter of a traingle \n7 Exit");
	scanf("%d",&ch);
	printf("input radius of a circle");
    scanf("%lf",&r);
    printf("input side of a square");
    scanf("%d",&a);
    printf("input height and l1 ,base and l3");
    scanf("%d%d%d%d",&h,&l1,&l2,&l3);
			
	switch(ch)
	{
		case 1:
		printf("area of the circle %lf",(3.14*r*r));	break;
		case 2:
		printf("perimeter of a circle %lf",(2*3.14*r));	break;
		case 3:
		printf("area of the square %d",a*a);	break;
		case 4:
		printf("perimeter of a square %d",4*a);	break;
		case 5:
		printf("area of the triangle %d",0.5*l2*h);	break;
		case 6:
		printf("perimeter of a triangle %d",l1+l2+l3);
		case 7:
			break;
		}return 0;
			}

