#include<iostream>
using namespace std;
int main()
{
    int icnt=0,sp=1;
    int arr[4]={11,22,14,22};
    int brr[2]={0};
    /**/
    
for(int i=0;i<4;i++)
{
  int  n=0;
    while(arr[i]>0) //digit seperate kele
    {
int d=arr[i]%10;
brr[n]=d;
n++;
arr[i]=arr[i]/10;

    }

    if(brr[0]==brr[1])
    {
icnt++;
    }

    //check krne

   
}
 cout<<icnt;
}