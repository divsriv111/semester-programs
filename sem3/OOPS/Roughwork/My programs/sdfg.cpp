#include<iostream>

using namespace std;

class Base
{
public:
    int fun()
    {
        cout<<"Base::fun() called";
    }
    int fun(int i)
    {
        cout<<"Base::fun(int i) called";
    }
};

class Derived: public Base
{
public:
    int fun()
    {
        cout<<"Derived::fun() called";
    }
};

int main()
{
    Derived d;
    d.fun();  // Compiler Error
    return 0;
}
