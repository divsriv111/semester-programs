#include <stdio.h>
int main(void)
{
	int a[100],i=0,c,n=0,ch,d,swap;
 
  while(1)
  {
  scanf("%d",&ch);
  if(ch==42)
  break;
  n++;
  a[i]=ch;
  i++;
  }
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (a[d] > a[d+1])
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
 
 
  for ( c = 0 ; c < n ; c++ )
  printf("%d\n", a[c]);
	return 0;
}
