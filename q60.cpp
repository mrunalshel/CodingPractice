#include<iostream>
using namespace std;
int main()
{
int s=0;//brr chya len paryant jaeel
int imax=0;
int arr[5]={4412,443,44,125,39};  //
int brr[5]={0};
for(int i=0;i<5;i++)
{

    if(i==4)
    {
        imax=arr[i];
    }
    else
    {
    imax=arr[i+1];
}
for(int j=i;j<5;j++)
{
    if(arr[j]>imax)
    {
        imax=arr[j];
        brr[s]=arr[j];
        
    }
}
 s++;
}
cout<<" ";
cout<<brr[0];
cout<<" ";
cout<<brr[1];
cout<<" ";
cout<<brr[2];
cout<<" ";
cout<<brr[3];
cout<<" ";
cout<<brr[4];
cout<<" ";
return 0;
}