#include<iostream>
using namespace std;
int main()
{


string by="jiii";
cout<<by[0];
cout<<" ";
int arr[6]={1,2,3,5,6,7};
int brr[6]={0};
int i=0,b=5,f=0;
int n=0;
while(n!=7)
{
brr[i]=arr[f];
i++;
n++;
f++;
if(n==7)
{
    break;
}
brr[i]=arr[b];
b--;
i++;
n++;

if(n==7)
{
    break;
}

}

cout<<brr[0];
cout<<" ";
cout<<brr[1];
cout<<" ";
cout<<brr[2];
cout<<" ";
cout<<brr[3];
cout<<" ";
cout<<brr[4];
cout<<" ";
cout<<brr[5];
cout<<" ";
return 0;
}