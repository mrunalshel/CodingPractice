#include<iostream>
using namespace std;

void pro()
{
int ino=123;
int imod,isum=0,idig=0;
while(ino>0)
{
imod=ino%10;

idig=(idig*10)+imod;
ino=ino/10;
}
cout<<isum;
}


int main()
{
pro();
return 0;
}