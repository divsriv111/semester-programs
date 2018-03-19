#include<stdio.h>
#include<conio.h>
int main()
{int x1,x2,x3,y1,y2,y3,slope1,slope2;
printf("input x1,y1 \n x2,y2 \n x3,y3 \n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
slope1=(y2-y1)/(x2-x1);
slope2=(y3-y2)/(x3-x2);
if(slope1==slope2)
printf("colinear");
else
printf("not a coloinear");
getch();
return 0;
}
