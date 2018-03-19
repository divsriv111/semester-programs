#include<iostream>
using namespace std;
class A
{
public:
A()
{ cout<<"A\n"; }
};

class B
{
public:
B()
{ cout<<"B\n"; }
};

class C
{
public:
C()
{ cout<<"C\n"; }
};

class D:private C,public A,private B
{
public:
D()
{ cout<<"D\n"; }
};

int main()
{
D ob;
}
