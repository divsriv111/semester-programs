#include<stdio.h>
void main()
{
    FILE *pop;
    pop=fopen("C:\\Users\\vai\\Desktop\\Panther.txt","w");
    fprintf(pop,"Float like a Cadillac, Sting like a Beamer");
    fclose(pop);
}
