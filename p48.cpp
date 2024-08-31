#include<iostream>
using namespace std;
int main()
{
             
  int arr[6]={3,2,1,1,23,45};
  int icnt=0,first=0,second=0;            
              for(int i=0;i<6;i++)
              {
icnt=0,first=0,second=0;
                for(int j=i;j<6;j++)
                {
if(arr[j]>arr[i])
{

icnt=1;
first=arr[i];
second=arr[j];

}

if(arr[i]>arr[j])
{
continue;
}
  }
if(icnt==1)
{
cout<<first;
cout<<'\n';
cout<<second;

}
                   

   return 0;
}