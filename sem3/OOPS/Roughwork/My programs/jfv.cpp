#include <iostream>
using namespace std;

class A
{public:
~A(){ cout<<"A\n" ;}
};

class B :A
{public:
~B(){ cout<<"B\n" ;}
};

class C :public B
{public:
~C(){ cout<<"C\n" ;}
};

class D :C
{public:
~D() { cout<<"D\n";}
};

int main()
{
D d;
A a;
C c;
return 0;
}
