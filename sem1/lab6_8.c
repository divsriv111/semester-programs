#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int n,sum=0;
printf("enter a number");
scanf("%d",&n);
sum=(pow(n,2)*pow((n+1),2))/4;
printf("sum of cubes of n natural numbers is %d",sum);
getch();
return 0;

}
