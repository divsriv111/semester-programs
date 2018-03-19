#include<iostream>
#include<math.h>
class rect
{
public:

    float getr();
    float getq();
};
using namespace std;
class polar
{
float x,y;
public:
    polar() {}
polar(float x,float y)
{
this->x=x;
this->y=y;
}
float getvalr()
{
return x;
}
float getvalq()
{
return y;
}
polar(rect ob)
{
    float r=ob.getr();
    float q=ob.getq();
    x=r+r;
    y=q+q;
}
void display()
{
cout<<" x= "<<x<<"   y= "<<y;
}
};

class rect
{
float r,q;
public:
    rect(){}
rect(float r,float q)
{
this->r=r;
this->q=q;
}
rect(polar ob)
{
    float x=ob.getvalr();
    float y=ob.getvalq();

r=sqrt(pow(x,2.0)+pow(y,2.0));
q=atan(y/x);
}
float getr()
{
    return r;
}
float getq()
{
    return q;
}

void display()
{
cout<<" r= "<<r<<"   q= "<<q;
}

};
int main()
{
rect ob;
polar ob1(10.0,7.0);
ob=ob1;
ob.display();
rect ob4(9.0,7.5);
polar ob5;
ob5=ob4;
ob5.display();
}
