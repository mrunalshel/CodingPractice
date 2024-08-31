#include<iostream>
using namespace std;
int main()
{
  int arr[5]={121,3333,33,212,3};
  int brr[5]={0};
  int imod=0,d=0,n=0;
  for(int i=0;i<5;i++)
  {
    int fina=arr[i];
imod=0;
    while(arr[i]>0)
    {
d=arr[i]%10;
imod=imod*10+d;
arr[i]=arr[i]/10;
    }

  

  if(imod==fina)
  {
    brr[n]=imod;
    n++;
  }
  }
  int max=brr[0];
for(int f=0;f<n;f++)
{
  if(brr[f]>max)
  {
    max=brr[f];
  }
}
cout<<max;
}