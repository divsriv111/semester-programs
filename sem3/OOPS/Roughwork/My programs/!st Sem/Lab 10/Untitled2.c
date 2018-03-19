#include<stdlib.h>
#include <stdio.h>
 #include<ctype.h>
 void main()
 { char* array;
 int n, i;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
  array = (char*) malloc(n*sizeof(int));
  fflush(stdin);
  for (i=0; i<(2*n-1); i++)
    { printf("Enter number %d: ", i);
  scanf("%c", &array[i]);
  fflush(stdin);
  }
  printf("The Dynamic Array is: \n");
  for (i=0; i<(2*n-1); i++)
    { printf("The value of %d is %c\n", i, array[i]);
  }
  }
