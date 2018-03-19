#include<iostream>
using namespace std;
class tap
{
int x;
public:
tap(int p)
{
x=p;
}
operator int()
{
return x;
}
};

int main()
{
int len;
tap tp(6);
len=tp;
cout<<"len = "<<len;
}
