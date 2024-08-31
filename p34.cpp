#include<iostream>
using namespace std;
int main()
{
int p=0;
   int  arr[50]={12,34,23,1,23,3,4};
    for(int i=0;i<7;i++)
    {
        p=1;
        for(int j=i;j<7;j++)
        {
            if(arr[i]<arr[j])
            {
                p=0;
                
            }

        }

        if((p!=0)&&(i!=6))
        {
            cout<<arr[i];
            cout<<" ";
        }
    }
}