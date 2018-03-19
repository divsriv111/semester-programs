#include<stdio.h>
#include<string.h>
int multi(char,char,int );
int main()
{
	char a[100],b[100],l[100],m[100];
	int s,n,p;
	printf("enter a  string\n");
	scanf("%s",a);
	printf("enter  2nd string\n");
	scanf("%s",b);
	printf("enter a choice\n");
	scanf("%d",&n);
	s=multi(a[100],b[100],n);
	if(s==0)
	printf("copy=%s",l);
	printf("copy=%s",m);
    if(s==1)
    printf("concatenates=%s",l);
    if(s==2)
    printf("length=%d",p);
    printf("length=%d",p);
	}
   int multi(char i,char j,int k)
{
	int p,a;
	char *l[100],*m[100];
	switch(k)
	{
		case 1:
			strcpy(l,i);
			strcpy(m,j);break;
		case 2:
			strcat(i,j);break;
		case 3:
		  p=strlen(i);
		  p=strlen(j);break;
		case 4:
		  a=strcmp(i,j);break;
		  if(a==0)
		  printf("string are equal\n");
		  else
		  printf("string are not equal\n");
	}
	return s;
}
