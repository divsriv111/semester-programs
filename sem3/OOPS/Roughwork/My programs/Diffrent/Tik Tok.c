#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k; char a[7][7];
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i==0||i==6||j==0||j==6)
			a[i][j]=176;
			else
			a[i][j]=' ';
		}
    }
    for(k=1;k>0;k++)
    {
    a[3][3]='*';
    a[2][3]='*';
    a[1][3]='*';
    for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");
	 a[2][3]=' ';
    a[1][3]=' ';
	a[2][4]='*';
	a[1][5]='*' ;
	for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");
	a[2][3]=' ';
	a[1][5]=' ' ;
	a[2][4]='*';
	a[1][5]='*';
	for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");
	 	a[2][4]=' ';
	a[1][5]=' ';
	a[3][4]='*';
	a[3][5]='*';
		for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");
	 	a[3][4]=' ';
	a[3][5]=' ';
		a[4][4]='*';
		a[5][5]='*';
	for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");	
	 	a[4][4]=' ';
		a[5][5]=' ';
		a[4][3]='*';
		a[5][3]='*';
		for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");	
	 	a[4][3]=' ';
		a[5][3]=' ';
		a[4][2]='*';
		a[5][1]='*';
			for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");	
	 	a[4][2]=' ';
		a[5][1]=' ';
		a[3][1]='*';
		a[3][2]='*';
		for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");	
	 	a[3][1]=' ';
		a[3][2]=' ';
		a[2][2]='*';
		a[1][1]='*';
			for(i=0;i<7;i++)
     {
			for(j=0;j<7;j++)
			 printf("%c",a[i][j]);
			 printf("\n");
	 }
	 for(i=0;i<=200000000;i++)
	 {}
	 system("cls");
	 	a[2][2]=' ';
		a[1][1]=' ';	
	}
	 		 
		
}
