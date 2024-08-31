#include<iostream>
using namespace std;
int main()
{
   int arr[90]={4,4,4,3,4,2,2,2};
   int brr[90]={0};
   int k=0,nr=0;

   for(int i=0;i<90;i++)
   {
k=0;
    for(int j=0;j<90;j++)
    {



        if(brr[j]==arr[i])
        {
            k=-3;
        }
    }


    if(k!=-3)
    {
        brr[nr]=arr[i];
        nr++;
    }
   }
cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];

}