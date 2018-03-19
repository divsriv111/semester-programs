#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>

void merging(int low, int mid, int high,int *a,int *b) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high,int *p,int *q) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid,p,q);
      sort(mid+1, high,p,q);
      merging(low, mid, high,p,q);
   } else { 
      return;
   }   
}

int main() { 
    int i,max;
    clock_t start,end;
        
    printf("\nEnter No of elements in the array:");
 	scanf("%d",&max);
 	start = clock();
    int *p=(int*) malloc(max*sizeof(int));
    int *q=(int*) malloc(max*sizeof(int));
    for(i=0;i<max;i++)
	 {
	  *(p+i)=rand();
	 }
	 printf("List before sorting\n");
    for(i = 0; i <= max; i++)
    printf("%d ", *(p+i));
   sort(0, max,p,q);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", *(p+i));
      
    end = clock();
 	printf("\n\nThe time for the event was: %f",((double)(end-start)/CLK_TCK));
 	free(p);
 	free(q);
 	getch();
 	return 0;
}
