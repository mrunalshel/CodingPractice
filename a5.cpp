#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
int b=0,c=0,k=0,maxeven=0,maxodd=0;

int evennoarr[800]={0};
int oddnoarr[800]={0};

for(int i=0;i<n;i++)
{
if(i%2==0)
{
evennoarr[b]=arr[i];
b++;
}
else
{
oddnoarr[c]=arr[i];
c++;
}

}
cout<<evennoarr;
cout<<arr;
}





int main()
{
int arr[7]={5,8,3,5,7,12,23};
fun(arr,7);
return 0;
}