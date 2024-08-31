#include<iostream>
using namespace std;
int main()
{


    int ans=0,ino1=343,ino2=199,i=0,p=0,icnt=0,y=0,z=0;
int arr[3]={0};
int brr[3]={0};
  while(ino1>0)
  {
    int d=ino1%10;
    arr[i]=d;
    i++;
    ino1=ino1/10;
    y++;
  }


   while(ino2>0)
  {
    int d=ino2%10;
    brr[p]=d;
    p++;
    ino2=ino2/10;
    z++;
  }

if(z>y)
{
    ans=z;
}
else{
    ans=y;
}
int o=0;
while(o!=ans)
{
    if((arr[o])<(brr[o]))
    {
icnt++;
arr[o+1]=arr[o+1]+1;

    }
    o++;
}

cout<<icnt;
  return 0;
}