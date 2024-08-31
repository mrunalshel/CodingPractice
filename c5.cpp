#include<iostream>
using namespace std; 
int main()
{
int ino=123;
while(ino>0)
{
imod=ino%10;
ino=ino/10;
ians=(imod*100)+ino;
}
cout<<ians;
return 0;
}