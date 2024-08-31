#include<iostream>
using namespace std;
int main()
{
int i=5,sum=0,sum1=0,j=0;
int n=11;
int arr[5]={12,3,4,5,3};


for(j=1;j<5;j++)
{
    sum=0,sum1=0;
    for(int u=0;u<j;u++)
    {
        sum=sum+arr[u];
    }

    for(int v=j+1;v<5;v++)
    {
        sum1=sum1+arr[v];
    }

    if((sum==sum1))
    {
        cout<<"yes";
        break;
    }

    
}

if(j==5)
    {
        cout<<"no";
    }




return 0;
}