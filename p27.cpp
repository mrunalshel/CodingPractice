#include<iostream>
using namespace std;
int main()
{

    
int arr[20]={'\0'};
int ino=0;
int t=1;
arr[1]=1;
for(int i=0;i<16;i++)
{

if(i>1)
{

    arr[i]=arr[i-2]+arr[i-1];
    
}
   cout<<arr[i];
   cout<<" ";
    
}

return 0;
}