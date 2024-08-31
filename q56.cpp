#include<iostream>
using namespace std;

void fun()
{
int arr[5]={10,1,2,4,5};
int n=11,sum=0;
/* */

for(int i=0;i<5;i++)
{
    sum=0;
    for(int j=i;j<5;j++)
    {
sum=sum+arr[j];
if(sum==n)
{
    cout<<i;
    break;
}
    }

if(sum==n)
{
    cout<<i;
    break;
}


}



}
int main()
{

fun();
    return 0;
}