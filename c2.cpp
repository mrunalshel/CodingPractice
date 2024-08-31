#include<iostream>
using namespace std;
class first
{
public:
void fun()
{
cout<<"hiii";
}

};

class sec:public first
{

};
int main()
{
sec *p=new sec;
p->fun();

return 0;
}