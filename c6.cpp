#include<iostream>
using namespace std; 
int main()
{
int ino=123,imod=0,ians=0;
while(ino>0)
{
imod=ino%10;
ians=(ians*10)+imod;
ino=ino/10;

}
cout<<ians;
return 0;
}