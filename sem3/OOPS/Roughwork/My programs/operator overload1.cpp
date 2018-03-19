#include<iostream>
#include<string.h>
using namespace std;
char * operator+(char *s1,char *s2)
{
    char *fs;
    strcpy(fs,s1);
    strcpy(fs,s2);
    return fs;
}
int main()
{
    char *s1,*s2,*fs;
  cout<<"Enter First Name: ";
    cin>>*s1;
   cout<<"Enter Last Name: ";
   cin>>*s2;
   *fs=s1+s2;
   cout<<*fs;
}
