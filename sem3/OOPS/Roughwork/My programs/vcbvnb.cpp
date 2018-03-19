#include<iostream>
using namespace std;
class Base1
{
public:
Base1()
{
cout << "Base1 \n"; }
};
class Base2
{
public:
Base2()
{
cout << "Base2 \n"; }
};

class Derived1 : public Base2,public Base1
{
public:
Derived1() { cout << "Derived1 \n";
}
};

class Derived2:protected Derived1
{
public:
Derived2()
{
cout << "Derived2 \n";
}
};

int main()
{
Derived1 d1;
Derived2 d2;
}
