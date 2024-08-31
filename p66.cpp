#include<iostream>
using namespace std;
int main()
{

    int ino=80,sapd=0;
    int arr[5]={1,2,3,4,6};


for(int i=0;i<6;i++)
{
sapd=0;
    for(int j=0;j<=5;j++)    
    {
        if(arr[j]==i)
        {
            sapd=1;
        }
    }

    if(sapd==0)
    {
        cout<<i;
    }
}


        }
    





