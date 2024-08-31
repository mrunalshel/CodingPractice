
#include<iostream>
using namespace std;


int main()
{
    int sp=0,n=0,s2=0;
float arr[23]={12,34,44,44};
float brr[23]={904,424,1224,2220};
float crr[10]={0};
float per=0;
float kmip;
/* 904*12/100  crr[i]=brr[i]*arr[i]/100  */
for(int i=0;i<4;i++)
{
    per =0;
    per=brr[i]*arr[i]/100;

    crr[i]=per;
}

kmip=crr[0];

for(int i=0;i<4;i++)
{
    if(kmip>crr[0])
    {
        kmip=crr[0];
    }
}
cout<<crr[0];
cout<<" ";
cout<<crr[1];
cout<<" ";
cout<<crr[2];
cout<<" ";
cout<<crr[3];
cout<<" ";
cout<<kmip;
cout<<" ";

}
 