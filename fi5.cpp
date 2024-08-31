#include<iostream>
using namespace std;    
int main()
{
int ino=0,ic=0,ino1=5,start=0;
int arr[]={0};
int *p=arr;
p=new int[ino1];
int index=0;

while(start!=ino1-1)
{
int change=start;
for(int i=0;i<ino1;i++)
{

if(arr[i]>start)
{
start=arr[i];
arr[i]=change;
}
}
cout<<arr;

}

return 0;
}