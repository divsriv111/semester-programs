#include<stdio.h>
#include<string.h>
char pop(char,char);
char str1[50],str2[50],str3[50];
int a,b;
void main()
{
printf("Enter 1st string\n");
gets(str1);
printf("\nEnter 2nd string\n");
gets(str2);
a=gets(str1);
b=gets(str2);

printf("\nAppended string is :-\n");
printf("%s",pop(str1,str2));
}
char pop(char str1,char str)
{
 int i,j;
 for(i=0;i<a;i++)
  str3[i]=str1[i];
  for(j=0;j<b;j++)
    str3[j+i]=str2[j];

  return(str3);
}
