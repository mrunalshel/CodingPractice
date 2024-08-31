#include<iostream>
using namespace std;
class fir
{
public:
virtual void fun()=0;
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
//fir *p;
sec obj;
obj.fun();


}