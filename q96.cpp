#include<iostream>
using namespace std;
int main()
{
   int arr[4]={1,2,3,4};
   int ahe=0;
   
   for(int i=0;i<=3;i=i+2)
   {
    int swap=arr[i];
arr[i]=arr[i+1];
arr[i+1]=swap;
   }
   for(int i=0;i<4;i++)
   {
    cout<<arr[i];
    cout<<"   ";
   }
return 0;
}