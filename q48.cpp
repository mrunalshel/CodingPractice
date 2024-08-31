#include<iostream>
using namespace std;
int main()
{
int t=0;
    int arr[5]={1,2,1,2,2}; 
    int brr[5]={8,1,4,44,4};
    int crr[10]={0};
    for(int i=0;i<5;i++)
    {
        crr[t]=arr[i]; //t mhje crr chi length
        t++;
    }

     for(int i=0;i<5;i++)
    {
        crr[t]=brr[i]; //t mhje crr chi length
        t++;
    }
for(int i=0;i<t;i++)
{
    for(int j=i;j<t;j++)
    {
        if(crr[i]>crr[j])
        {
          int temp=crr[i];
          crr[i]=crr[j];
          crr[j]=temp;  
        }
    }
}
    cout<<crr[0];
    cout<<crr[1];
    cout<<crr[2];
    cout<<crr[3];
    cout<<crr[4];
    cout<<crr[5];
    cout<<crr[6];
    cout<<crr[7];
    cout<<crr[8];
    cout<<crr[9];
   
}