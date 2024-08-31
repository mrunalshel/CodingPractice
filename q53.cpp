#include<iostream>
using namespace std;
int main()
{
 int ino1=4,ino2=8,ifinal=0;
 for(int i=1;i<ino1*10;i++) 
 {   
if((ino1%i==0)&&(ino2%i==0))
{
    ifinal=i;
}
 } 
cout<<ifinal;
}