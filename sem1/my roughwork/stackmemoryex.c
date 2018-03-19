#include<stdio.h>
int a[100];
int limit;
void main()
{
	int n=0,ch,i;
	scanf("%d",&limit);
	do
	{
		printf("1.push\n2.pop\n3.Display\n4.End\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				if(n>limit)
				printf("Stack overflow\n");
				else
				{
					scanf("%d",&a[n]);
					n++;
					break;
				}
			case 2:
				 if(n==0)
				 printf("Empty underflow\n");
				 else
				 {printf("%d popped",a[n-1]);
				 n--;
				 }
				 break;
			case 3:
				 	for(i=0;i<n;i++)
				 	printf("%d\t",a[i]);
				 	break;
			case 4:
				break;
			default:
				printf("Wrong input\n");
				break;
					
		}
	}while(ch!=4);
}
