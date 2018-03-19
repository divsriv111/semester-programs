#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int l1=0,l2=0,i=0,j=0;
printf("Enter two String\n");
gets(s1);
gets(s2);
while(s1[j]!='\0')
{
l1++;j++;
}
while(s2[i]!='\0')
{
l2++;i++;
}
if(l1==l2)
printf("String is Equal");
else
printf("Vikcy hai chutiya");
}
