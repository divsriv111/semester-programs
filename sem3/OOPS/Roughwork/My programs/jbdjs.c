#include<stdio.h>
void main()
{
register int i=0;
i++;
if(i<=5)
{
printf("\n%d",i);
main();
}
else
exit(0);
}

