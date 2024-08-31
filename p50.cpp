#include<iostream>
using namespace std;
int main()
{
    int arr[8]={134,233,153,153};
int ow=0,hp=0;
while(ow!=3)
{
    int ino=arr[hp],n=0,sum=0;
int s=ino;
      while(ino>0)
      {
        int d=ino%10;
arr[n]=d;
n++;
ino=ino/10;
      }

     for(int i=0;i<n;i++)
     {
        int u=0,a=n+1;
u=arr[i];
        sum=sum+u*u*u;
        
     }
     if(s==sum)
        {
            cout<<s;
        }

ow++;
hp++;
}
}