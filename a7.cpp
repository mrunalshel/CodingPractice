#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
int b=0,c=0,k=0,maxeven=0,maxodd=0,seven=0,sodd=0;

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


for(int i=0;i<b;i++)
{
if(evennoarr[i]>maxeven)
{
maxeven=evennoarr[i];
}
}


for( int i=0;i<b;i++)
{
for(int j=0;j<b;j++)
{
if((maxeven>evennoarr[i])&&(evennoarr[i]>evennoarr[j]))
{
seven=evennoarr[i];
}
}
}
 return seven;
}





int main()
{
int arr[7]={25,8,3,5,7,12,23};
int ians=fun(arr,7);
cout<<ians;
return 0;
}