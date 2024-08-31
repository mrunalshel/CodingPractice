#include<iostream>
using namespace std;
int main()
{
    int ans,icnt=-1;
int arr[5]={6,0,45,116,666};
for(int i=0;i<5;i++)
{
    ans=0;
    for(int j=0;j<i;j++)
    {
        if(arr[j]>arr[i])
        {
          ans=-1;
        }

    }

    if(ans!=-1)
    {
        
        icnt++;
    }
}
cout<<icnt;

}