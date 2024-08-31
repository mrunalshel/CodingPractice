#include<iostream>
using namespace std;
int main()        
{               
    int arr[10]={9,8,7,6,6};
    int i=5;
    for(int j=0;j<i;j++)
   {
    for(int k=j;k<i;k++)
    {
        if(arr[j]>arr[k])
        {
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }

    }
}
cout<<arr[0];

cout<<arr[1];
cout<<arr[2];
cout<<arr[3];
cout<<arr[4];

}