#include<iostream>
using namespace std;
int main()
{
int arr[5]={4,4,4,4,4};
int brr[5]={0};
int n=5,cou=0,icnt=0,fina=0,k=0;
for(int i=0;i<5;i++)

{
    icnt=0;
      for(int k=0;k<5;k++)
        {
            if(brr[k]==arr[i])
            {
                icnt++;
            }
        }
    if(icnt==0)
    {
        brr[i]=arr[i];
        cou++;
    }
}
cout<<cou;
}