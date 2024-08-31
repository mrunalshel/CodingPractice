//reverse no//
#include<iostream>
using namespace std;
class hii
{
public:
static int first (int ino)
{
int idigit=ino,iq=0,imod=0,rev=0;
while(ino>0)
{
idigit=ino%10;
rev=(rev*10)+idigit;
ino=ino/10;
}

return rev;
}
};
int main()
{
int iret=hii::first(123);
cout<<iret;
}

