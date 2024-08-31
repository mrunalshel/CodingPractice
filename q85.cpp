#include<iostream>
using namespace std;
int main()
{


int ino1=16,ino2=4;
for(int i=0;i<16;i++)
{
    if((ino1%i==0)&&(ino2%i==0))
    {
        cout<<i;
    }
}

 return 0;
}