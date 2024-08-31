#include<iostream>
using namespace std;
int main()
{
             
  int arr[5]={3,2,1,1};
  int int1=0;            
                                

for(int i=0;i<3;i++)
{
 for(int j=i;j<3;j++)
 {
  if(arr[i]>arr[j])
  {
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
int1++;
  }
 }
}

cout<<int1;

   return 0;
}