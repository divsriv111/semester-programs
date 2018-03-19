#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,j,k,l;
struct game
{
 char name[100],team[100];
 int avg;
}s[100];
void main()
{
 int n;
 printf("how many records do you want ot enter ");
 scanf("%d",&n);
 printf("enter the name of the player , team name and batting average ");
 for(i=0;i<n;i++)
 {
  scanf("%s%s%d",&s[i].name,&s[i].team,&s[i].avg);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
	if(strcmp(s[i].team,s[j].team)==0)
	{
	 printf("%s\t%s\t%d\t\n",s[i].name,s[i].team,s[i].avg);
	}
  }
 }
}
