#include<iostream>
using namespace std;
class first
{
protected:
int i=7;
};

class sec:protected first
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