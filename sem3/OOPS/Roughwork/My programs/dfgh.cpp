#include<iostream>
using namespace std;
class complex
{
float x;
float y;
public:
complex(){} //Constructor 1
complex(float real, float imag) // Constructor 2
{ x=real; y= imag;}
friend complex operator+(complex,complex);
void display(void);
};
complex operator +(complex c1, complex c2)
{
complex temp;
temp.x=c1.x+c2.x;
temp.y=c1.y+c2.y;
return (temp);
}
void complex:: display(void)
{
cout<<x<<"+j"<<y<<"\n";
}
int main()
{
complex c1(2.5,3.5); //invokes constructor 2
complex c2(1.6,2.7); //invokes constructor 2
complex c3;//invokes constructor 1
c3=c1+c2; //complier see like this c3=operator+(c1,c2);
cout<<"c1 ="<<c1.display();
cout<<"c2 ="<<c2.display();
cout<<"c3="<<c3.display();
return 0;
}
