#include<iostream>
using namespace std;
int main()
{
 int ino1=13,ino2=8,ifinal=0;
 for(int i=1;i<ino1*10;i++) 
 {   
if((i%ino1==0)&&(i%ino2==0))
{
    ifinal=i;
    break;
}
 } 
cout<<ifinal;
}