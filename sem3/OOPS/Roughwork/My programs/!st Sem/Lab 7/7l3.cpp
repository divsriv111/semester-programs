#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the ages of ram,shyam and ajay");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
printf("ram is youngest of all");
else if(b<c && b<a)
printf("shyam is youngest of all");
else if(c<b && c<a)
printf("ajay is youngest of all");
else
printf("all of them are of same age");
}

