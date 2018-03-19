#include<iostream>
using namespace std;
class pop
{
int x;
public:
pop(int x)
{
this->x=x;
}
void operator ++()
{
++x;
}

void operator ++(int)
{
x++;
}

void display()
{
cout<<"x= "<<x<<endl;
}
};

int main()
{
pop ob(6);
++ob;
ob.display();
ob++;
ob.display();
}
