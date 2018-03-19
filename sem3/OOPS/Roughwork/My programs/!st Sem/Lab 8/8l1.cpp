#include<stdio.h>
int main()
{
char ch;
int a,b,re;
printf("enter character  ");
scanf("%c",&ch);
printf("enter two numbers ");
scanf("%d %d",&a,&b);
switch(ch)
{
case '1' :re=a+b;
break;
case '2' :re=a-b;
break;
default  :re=a*b;
break;
}
printf("the result is %d",re);
}
