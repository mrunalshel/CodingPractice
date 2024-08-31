#include<iostream>
#include<stdbool.h>
using namespace std;
bool chk(int ino)
{
int i=0;
for(i=0;i<=ino;i++)
{
if(i/ino==0)
{
break;
}
}

if(i==ino)
{
return true;
}

else
{
return false;
}
}
int main()
{

int ino=0;
bool ians=false;
cout<<"enter no";
cin>>ino;
ians=chk(ino);
if(ians==true)
{
cout<<"no is prime";
}
else
{
cout<<"not prime";
}
}