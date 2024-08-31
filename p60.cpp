#include<iostream>
using namespace std;
int main()
{
int n=0,totalno=5,st=0;  
   int arr[5]={1,2,3,4,5};
int brr[5]={0};

  /* while n!=3
   brr[totalno-1]=arr[i];
brr[i]=arr[i+1]  if i!=totalno-1


arr[i]=brr[i];//resort*/

while(st!=3)
{
for(int i=0;i<5;i++)
{
brr[totalno-1]=arr[0];
if (i!=totalno-1)
{
    brr[i]=arr[i+1];

}


}


for(int k=0;k<5;k++)
{
    arr[k]=brr[k];
}
st++;
}
cout<<arr[0];

cout<<arr[1];
cout<<arr[2];

cout<<arr[3];

cout<<arr[4];

}