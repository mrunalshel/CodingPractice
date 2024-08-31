#include<iostream>
using namespace std;
int main()
{
int sapdla=0;
int n=11;
int arr[5]={4412,443,44,125,39};  //jyche aadhiche no mothe ahe te print krne
for(int i=1;i<5;i++)
{
    sapdla=0;
    for(int j=0;j<i;j++)
    {        
        if(arr[j]<arr[i])
        {
            sapdla=7;
        }
    }

    if(sapdla!=7)
    {
        cout<<" ";
        cout<<arr[i];
        cout<<" ";
    }

    
}

 


return 0;
}