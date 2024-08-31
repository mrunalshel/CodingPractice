#include<iostream>
using namespace std;
int main()
{

    int arr[56]={23,34,9,3,2,4};
    int brr[90]={0};
    int gh=0,j=0,o=0;
    for(int i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[j]==2)
            {
                o=j;
                break;
            }
        }
        }
      cout<<o;
}