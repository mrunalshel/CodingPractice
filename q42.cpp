#include<iostream>
using namespace std;
int main()
{
    int n=6;
int arr[20]={0,12,33,0,0,4,5};
int brr[6]={0};
for(int i=0;i<8;i++)
{
if(arr[i]==0)
{
    brr[n]=arr[i];//n brr shevt paryant jael
    n--;
}
}
int t=0;
for(int i=0;i<8;i++)
{
if(arr[i]!=0)
{
    brr[t]=arr[i];//n brr shevt paryant jael
    t++;
}
}

cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];
cout<<brr[5];
cout<<brr[6];

    return 0;
}