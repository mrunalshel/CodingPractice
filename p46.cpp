#include<iostream>
using namespace std;
int main()
{
             
  int arr[5]={12,23,43,23,22};
  int brr[5]={0};
  int crr[5]={0};
  int ic=0,icnt=0,cr=0;

  for(int i=0;i<5;i++)
  {
    icnt=0;
    for(int j=0;j<5;j++)
    {       
        if(arr[i]==brr[j])
        {
            icnt=2;
        }
    }

    if(icnt==0)
    {
        brr[ic]=arr[i];
       
        ic++;

       
    }
  }
cr=ic;
for(int k=0;k<cr;k++)
  {
    
    for(int n=k;n<cr;n++)
    {       
        if(brr[k]>brr[n])
        {
           int temp=brr[k];
           brr[k]=brr[n];
           brr[n]=temp;
        }
      
    }
  }

cout<<brr[2];
   return 0;
}