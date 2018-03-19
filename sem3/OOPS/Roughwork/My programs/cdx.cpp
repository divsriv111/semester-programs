#include<iostream>
using namespace std;
class Base
{
   protected:
      int x;
   public:
      Base (int i){ x = i;}
};

class Derived : public Base
{
   public:
      Derived (int i) {
      x=Base(i); }
      void print() { cout << x ; }
};

int main()
{
    Derived d(10);
    d.print();
}
