#include<iostream.h>
int count=0;
class test
{
public:
test(){ count++;
cout<<" object"<<count<<"Created";
}
~test(){
cout<<"object"<<count<<"Destroyed";
count--;
}
int main()
{
cout<<"\n Enter Main";
test t1,t2;
{
cout<<"Enter block 1\n";
test t3;
}
{
cout<<"\n Enter Block 2\n";
test t4;
}
cout<<"\n Reenter main";
return 0;
}
