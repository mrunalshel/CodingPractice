
#include<iostream>
using namespace std;


int main()
{
    int sp=0,n=0,s2=0;
int arr[23]={12,34,44,44,44};
int brr[23]={34,44,14,20};
int crr[10]={0};
for(int i=0;i<5;i++)
{
    sp=0;
    for(int j=0;j<5;j++)
    {
        if(crr[j]==arr[i])
        {
            sp=1;
        }
    }

    if(sp!=1)
    {
        crr[n]=arr[i];
n++;
    }
}


for(int k=0;k<4;k++)
{
    s2=0;
    for(int b=0;b<4;b++)
    {
        if(crr[b]==brr[k])
        {
            s2=1;
        }
    }

    if(s2!=1)
    {
        crr[n]=brr[k];
        n++;
    }
}

cout<<crr[0];
cout<<" ";
cout<<crr[1];
cout<<" ";
cout<<crr[2];
cout<<" ";
cout<<crr[3];
}
 