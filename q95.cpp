#include<iostream>
using namespace std;
int main()
{
   int arr[5]={91,92,94,93};
   int ahe=0;
   for(int i=91;i<=95;i++)
   {
    ahe=0;
for(int j=0;j<=5;j++)
{
    if(arr[j]==i)
    {
        ahe=1;
    }
}

if(ahe!=1)
{
    cout<<i;
}
   }
return 0;
}