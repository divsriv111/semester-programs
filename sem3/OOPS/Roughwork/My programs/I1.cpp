#include<iostream>
using namespace std;
class base
{
public:
 void b_fun()
 {
 cout<<"I'm base function";
 }
 };

 class derived: public base
 {
 };

 int main()
 {
 derived ob;
 ob.b_fun();
 }
