#include<iostream>
using namespace std;
class Bob
{
int x,y,z;
public:
Bob(int xx,int yy,int zz)
{
x=xx;
y=yy;
z=zz;
}

void Bob::operator -()
{
x-=1;
y-=1;
z-=1;
return ob;
}
void print()
{
cout<<"x = "<<x<<"\ny = "<<y<<"\nz = "<<z;
}
};

int main()
{
Bob ob;
-ob;
ob.print();
}
