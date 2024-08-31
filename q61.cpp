#include<iostream>
using namespace std;
int main()
{
int s=0;//brr chya len paryant jaeel
int imax=0;
int arr[5]={4412,4466,44,125,39};  //
int brr[5]={0};
for(int i=0;i<3;i++)
{
    imax=arr[i];
    for(int j=i;j<=i+2;j++)
    {
        if(arr[j]>imax)
        {
            imax=arr[j];
        }
    }
    brr[s]=imax;
    s++;
}
   
/*cout<<" ";
cout<<brr[0];
cout<<" ";
cout<<brr[1];
cout<<" ";
cout<<brr[2];
cout<<" ";
cout<<brr[3];
cout<<" ";*/
cout<<brr;
cout<<" ";
return 0;
}