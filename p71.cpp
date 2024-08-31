#include<iostream>
using namespace std;
int main()
{




    int arr[10]={11,12,13,12};
    int ino=24;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if((arr[i]+arr[j]==ino)&&(i!=j))
            {
                cout<<" ";
                cout<<arr[i];
                cout<<" ";
                cout<<arr[j];
                cout<<" ";
            }
        }
    }
}