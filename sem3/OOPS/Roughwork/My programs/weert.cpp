#include<iostream>
using namespace std;
class Distance
{
int f,i;
public:
    Distance():f(0),i(0)
    {   }
    Distance(int l)
    {
        f=l/12;
        i=l%12;
    }
    void display()
    {
        cout<<"Feet = "<<f<<"  Inches = "<<i;
    }
};

int main()
{
    int len =20;
    Distance ob=20;
    ob.display();
}
