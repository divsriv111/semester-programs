#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],i;
	printf("enter a string\n");
	gets(a);
	for(i=0;a[i]!='\0';++i){
   if(a[i]==' ')
	a[i]=a[i+1];}
	a[i]='\0';
	printf("%s",a);
	
}
