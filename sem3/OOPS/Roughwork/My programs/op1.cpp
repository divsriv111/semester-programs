#include <iostream>
using namespace std;
class Space
{
public:
int mCount;
Space()
{
mCount = 10;
}
Space operator ++()
{
mCount++;
return Space(mCount);
}
};
int main(){Space objSpace;++ objSpace;cout<<++objSpace.mCount;return 0;}
