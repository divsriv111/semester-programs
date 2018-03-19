#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h> 
int main()
{
   int n, c, d, position, swap;
   clock_t start,end;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
   start = clock();
   int *array=(int*) malloc(n*sizeof(int));
   
   for ( c = 0 ; c < n ; c++ )
      *(array+c)=rand();
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( *(array+position) > *(array+d) )
            position = d;
      }
      if ( position != c )
      {
         swap = *(array+c);
         *(array+c) = *(array+position);
         *(array+position) = swap;
      }
   }
   printf("Sorted list in ascending order:\n");
   for ( c = 0 ; c < n ; c++ )
      printf("%d\t", *(array+c));
	end = clock();
   printf("\n\nThe time for the event was: %f",((double)(end-start)/CLK_TCK));
   free(array);
   return 0;
}
