#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],*ptr;
 int i,j,k,l;
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 ptr=a;
 int temp=0;
 for(i=0;i<5;i++)
 {
  for(j=i;j<5;j++)
  {
   if(*ptr>*ptr+1)
   {
	temp=*ptr;
	*ptr=*ptr+1;
	*ptr+1=temp;
}
}
}
for(i=0;i<5;i++)
{
	 printf("%d",a[i]);
}
getch();
return 0;
}


