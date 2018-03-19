#include<iostream>
using namespace std;
class B
{ int a;
public:B(){ cout<<"\nContructor B() is called\n";}
};
class D:protected B
{ int c;
public:D(){ cout<<"\nContructor D() is called\n";}
};
int main()
{
D d;
B b;
return 0;
}
