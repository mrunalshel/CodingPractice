#include<iostream>
using namespace std;
int main()
{
             
    int arr[34]={1,2,3,4};
int brr[4]={0};
brr[0]=arr[2];

for(int i=0;i<4;i++)
{
    if((i!=3)&&(i<2))
    {
    brr[i+1]=arr[i];
}
else if(i>2)
{
    brr[i]=arr[i];
}

    }

    cout<<brr[0];
    cout<<brr[1];
    cout<<brr[2];
    cout<<brr[3];
   return 0;
}