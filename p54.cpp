#include<iostream>
using namespace std;
int main()
{

       int second=0,icnt=0,first=0;         
    int arr[5]={12,34,2,2,122};
              
    for(int i=0;i<5;i++)
    {
        icnt=0;
        for(int j=i+1;j<5;j++)
        {
if(arr[j]>arr[i])
{
first=arr[i];
second=arr[j];
icnt=1;
}



else{
    break;
}

        }
if(icnt==1)
{
cout<<"  ";
    cout<<first;
   cout<<" ";
    cout<<second;
}
    }

    return 0;
}