
#include<iostream>
using namespace std;

int fun(int ino,int arr[])
{
    int imax=arr[0];
    for(int i=0;i<5;i++)
    {
        if((arr[i]>imax)&&(arr[i]%ino==0))
        {
imax=arr[i];
        }
    }
    return imax;
}
int main()
{

int ino=9;
int arr[5]={12,45,900,89,90};
int imax=fun(ino,arr);
cout<<imax;

      

return 0;
}
