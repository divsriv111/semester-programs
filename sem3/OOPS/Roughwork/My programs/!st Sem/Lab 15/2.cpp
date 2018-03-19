#include<stdio.h>
#include<conio.h>
struct student
{
 int enr,math,phy,chem;
 int perc;
}s[10];
void main()
{
 int i,j,k,l;
 for(i=0;i<5;i++)
 {
  scanf("%d%d%d%d",&s[i].enr,&s[i].math,&s[i].phy,&s[i].chem);
 }
 int sum=0;
 for(i=0;i<5;i++)
 {sum=0;
  sum=s[i].math+s[i].phy+s[i].chem;
  s[i].perc=(sum/45)*100;
 }
 printf("the percentage of each student is \n");
 for(i=0;i<5;i++)
 {
  printf("%d   %d\n",s[i].enr,s[i].perc);
 }
}
