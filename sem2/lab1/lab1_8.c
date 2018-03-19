#include<stdio.h>
#include<string.h>
void conc(int,char *,char *,char *);
int main()
{
	char c[100],w[100],p[200];
	char *ptr1,*ptr2,*ptr3;
	int len1, len2;
	
	ptr1=c;
	ptr2=w;
	ptr3=p;
	printf("Enter the string1\n");
	gets(c);
	
	printf("Enter the string2\n");
	gets(w);
	len1=strlen(c);
	len2=strlen(w);
	conc(len2,ptr1,ptr2,ptr3);
	
	return 0;
}
void conc(int a,char *b,char *c,char *d)
{
	while(*ptr1!=='\0')
	{
		*ptr3=*ptr1;
		*ptr1++;
		*ptr3++;
		if
	}
	
}
