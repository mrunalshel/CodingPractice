#include<iostream>
using namespace std;
int main()
{

    int ino1=654,ino2=229;     /* */
int i=0,b=0;
int arr[10]={0};
    int brr[10]={0};
    while(ino1>0)
    {
        int d=ino1%10;
        arr[i]=d;      // i mhnje total no in arrray
        i++;
       ino1= ino1/10;
    }

    while(ino2>0)
    {
        int d=ino2%10;
        brr[b]=d;      // b mhnje total no in arrray
        b++;
      ino2=ino2/10;
    }



int h=0,icnt=0;

while(h!=b)
{
   if(((arr[h]-brr[h])<0)&&(h!=b-1))
   {
    icnt++;
    arr[h+1]=arr[h+1]-1;
    
   }
   h++;
}


cout<<icnt;
return 0;
}