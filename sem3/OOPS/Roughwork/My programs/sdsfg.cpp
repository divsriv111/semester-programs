#include<iostream>
using namespace std;

class Bob
{
    int x,y;
public:
    Bob(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    friend Bob operator+(Bob &,Bob &);
    void display()
    {
        cout<<"x= "<<x<<"y= "<<y<<endl;
    }
};

Bob operator +(Bob &ob1,Bob &ob2)
{
    Bob ob3;
    ob3.x=ob1.x+ob2.x;
    ob3.y=ob1.y+ob2.y;
    return ob3;
}

int main()
{
    Bob ob1(5,6),ob2(3,3);
    Bob ob3=ob1+ob2;
    ob3.display();
}

