
#include<iostream>
using namespace std;

int fun(int ino,int *arr)
{

    int imax=arr[0];
    for(int i=0;i<5;i++)
    {
    
        if(arr[i]>imax)
        {
            imax=arr[i];
        }
    }
    return imax;
}
int main()
{

int ino=9;
int arr[5]={11112,433222225,900,89,9022222};
int imax=fun(ino,arr);
cout<<imax;

      

return 0;
}
