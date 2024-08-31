#include<iostream>
using namespace std;
int* fun()
{
    int n=4,m=4,k=0,i=0,j=0,temp=0;
int arr[n]={1,2,3,4};
int brr[m]={2,3,32,1};
int u=n+m;
int crr[n+m]={0};
int *p=NULL;
p=new int (u);
p=crr;
for(i=0;i<n;i++)
{

crr[k]=arr[i];
k++;
}
for(i=0;i<m;i++)
{

crr[k]=brr[i];
k++;
}



for(i=0;i<k;i++)         
{                       

    for(j=i;j<k;j++)
    {
        if(crr[i]>crr[j])     
        {
            temp=crr[i];
            crr[i]=crr[j];
            crr[j]=temp;
        }
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
cout<<crr[4];
cout<<" ";
cout<<crr[5];
cout<<" ";
cout<<crr[6];
cout<<" ";
cout<<crr[7];


return p;

}






int main()
{
    int *p=NULL;
p=fun();
cout<<p;

}