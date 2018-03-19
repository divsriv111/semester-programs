#include<iostream>
class a
{
int arr[10];
};
class b:private a
{
    int br[5];
};

int main()
{
    std::cout<<sizeof(b);
}
