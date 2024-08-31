#include<iostream>
using namespace std;
class first
{
public:
int i=7;
};

class sec
{
public:
void fun()
{
cout<<i;
}
};
int main()
{

sec obj;
obj.fun();
}