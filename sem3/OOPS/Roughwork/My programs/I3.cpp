#include<iostream>
using namespace std;
class base
{
protected:
 void fun()
 {
 cout<<"Protected member accessed";
 }
public:
 void fun1()
 {
 cout<<"Visibility Mode: Public\n";
 fun();
 }
};

class derived1:public base
{
public:
 void fun2()
 {
 fun();
 }
};


int main()
{
//base ob;
//ob.fun1();
derived1 ob;
ob.fun2();
}
