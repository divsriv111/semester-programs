#include<iostream>
using namespace std;

class base {
    int b;
    public:
    void getdata(int k)
    {
    b=k;
    }
    operator int()
    {
    return b;
    }

};

int main(void)
{
  base ob;
  ob.getdata(10);
  int x=ob;
  cout<<x;
}
