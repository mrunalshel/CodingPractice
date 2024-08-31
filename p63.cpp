#include<iostream>
using namespace std;
int main()
{
int arr[5]={10,13,45,64,66};
int brr[5]={0};




/*64 10 13
if i==0
arr[0]=arr[3];

if(i>0&&i<4)
arr[j]=arr[i]-1

if(i>3)
{
  arr[j]=arr[i]
}*/




for(int i=0;i<5;i++)
{

if (i==0)
{
brr[0]=arr[3];
}


else if((i>0)&&(i<4))
{
brr[i]=arr[i-1];
}

else if(i>3)
{
  brr[i]=arr[i];
}

}
cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];
cout<<brr[5];
return 0;

}