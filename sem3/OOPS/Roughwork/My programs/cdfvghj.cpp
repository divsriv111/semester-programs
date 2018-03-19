#include<iostream>
using namespace std;
class base
{
public:
    void fun()
    {
        cout<<"base function";
    }
};

class derive: public base
{
    public:
    void fun()
    {
        cout<<"derived func";
    }
};

int main()
{
    derive ob;
    ob.fun();
}
