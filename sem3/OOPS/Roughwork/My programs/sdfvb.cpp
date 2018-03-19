#include<iostream>
using namespace std;
class Num
{
int num;
public:
void getnum()
{
cout<<"Enter no.: ";
cin>>num;
}
int retnum()
{
return num;
}
};

class square:public Num
{
int num,sq;
public:
//getnum();
int getsq()
{
num=retnum();
sq=num*num;
return sq;
}
};

class cube:public Num
{
int num,cub;
public:
//getnum();
int getcub()
{
num=retnum();
cub=num*num*num;
return cub;
}
};

int main()
{
square ob;
ob.getnum();
cout<<"Square : "<<ob.getsq();
cube ob1;
ob1.getnum();
cout<<"Cube : "<<ob1.getcub();
}
