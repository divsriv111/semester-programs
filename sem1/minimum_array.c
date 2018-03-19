#include<stdio.h>
int main()
{
int arry[10],i,min;

printf("Input 10 numbers-");

for(i=0;i<10;i++)
scanf("%d",&arry[i]);

min=arry[0];
for(i=1;i<10;i++)
{
if(arry[i]<min)
min=arry[i];
}
printf("\n Minimum is %d",min);
getch();
return 0;
}
