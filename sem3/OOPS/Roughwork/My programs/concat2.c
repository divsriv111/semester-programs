#include<stdio.h>
#include<string.h>
char s3[50];
char append(char[],char[]);
void main()
{
char s1[50],s2[50];
printf("Plz Enter a string\n");
gets(s1);
printf("\nPlz enter another string\n");
gets(s2);
int a=strlen(s1);
int b=strlen(s2);
s1[a],s2[b];
append(s1,s2);
printf("\nNew String is :- %s ",s3);
}
char append(char s1[],char s2[])
{
    int i,j;
int a=strlen(s1);
int b=strlen(s2);
s3[a+b];
for(i=0;i<a;i++)
    s3[i]=s1[i];
for(j=0;j<b;j++)
    s3[j+i]=s1[j];
return(s3);
}
