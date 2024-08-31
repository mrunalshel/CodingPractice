#include<iostream>
using namespace std;
int main()
{
  int arr[3]={4,4,4};
  int k=8,icnt=0;
  for(int i=0;i<=1;i++)
  {
    if((arr[i]+arr[i+1]==k)||(arr[i]+arr[i+2]==k))
    {
        icnt++;
    }
}
  
 for(int i=0;i<1;i++)
  {
    if((arr[i]+arr[i+1]+arr[i+2])==k)
    {
        icnt++;
    }

    
  }
cout<<icnt;

    }
