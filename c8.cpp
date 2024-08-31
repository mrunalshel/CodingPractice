#include<iostream>
using namespace std;
class fir
{
public:
virtual void fun()
{
cout<<"fir";

}
};

class sec:public fir
{
     public:
void fun()

{
cout<<"sec";
}
};
int main()
{
fir *p;
sec obj;
p=&obj;
p->fun();

}