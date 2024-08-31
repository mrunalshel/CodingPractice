//bubble sort
#include<iostream>
using namespace std;
int fun()
{
int k=0,no=5,m=2;
static int arr[5]={2,1,4,6,3};


for(int i=0;i<=3;i++)
{

for(int j=0;j<=3;j++)
{
    if(arr[j]>arr[j+1])
    {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        k++;
    }
}

}







return k;
}
int main()
{
int ia=fun();
cout<<ia;
return 0;

}