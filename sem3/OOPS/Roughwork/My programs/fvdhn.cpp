#include <iostream>
using namespace std;
class Distance
{
private:
 int feet,inches;
public:
Distance()
 { }

Distance(int l)
{
feet=l/12;
inches=l%12;
}

void showData()
{
cout<<"\nfeet= "<<feet<<"  inches= "<<inches;
}
};

int main()
{
Distance ob;
int len;
cout<<"Enter Length: ";
cin>>len;
ob=len;
ob.showData();
}
