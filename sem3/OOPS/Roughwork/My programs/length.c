#include<stdio.h>
#include<string.h>
void main()
{
   int i,j,count =0,count1=0;
   char ch[20],ch1[20];
   printf("Enter a String\n");
   gets(ch);
   gets(ch1);
   for(i=0;ch[i]!='\0';i++)
    count++;
  for(j=0;ch1[j]!='\0';j++)
    count1++;
   for(i=0;ch[i]!='\0';++i);
   for(j=0;ch1[j]!='\0';++j,++i)

       ch[i]=ch1[j];
   ch[i]='\0';
   printf("%s",ch);
}

