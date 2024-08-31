#include<iostream>
using namespace std;

int fun()
{
int r=7,i=0,ians=0;
int unit=2,isum=0;
int arr[50]={12,8,3,5,7,4,1,2};
int n=8;

int ifina=r*unit;

for(i=0;i<10;i++)
{
isum=isum+arr[i];
    if(isum>=ifina)
    {
        break;
    }

    
}

return i+1;
}
int main()
{
    int a=fun();
    cout<<a;

}