#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h> 
int main()
{
  int n, c, d, t,i;
  clock_t start,end;
  printf("\nEnter No of elements in the array:");
 scanf("%d",&n);
 start = clock();
 int *array=(int*) malloc(n*sizeof(int));
 
 printf("Enter the elements of array to be sorted:");
 for(i=0;i<n;i++)
	 {
	  *(array+i)=rand();
	 }
 printf("\nThe Elements of the unsorted array are:\n");
 
 for(i=0;i<n;i++)
	 {
	  printf("%d\t",*(array+i));
	 }
 printf("\n");
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
  printf("Sorted list in ascending order:\n");
 
  for(i=0;i<n;i++)
	 {
	  printf("%d\t",*(array+i));
	 }
  end = clock();
 printf("\n\nThe time for the event was: %f",((double)(end-start)/CLK_TCK));
 free(array);
 
  return 0;
}
