#include<iostream>
using namespace std;
int main()
{
int arr[5]={10,13,45,66,66};
int esum=0,osum=0;
for(int i=0;i<5;i++)
{

    if((arr[i]%2)==0)
    {
        esum=esum+arr[i];
    }

    else{

        osum=arr[i]+osum;
    }
}

if(osum>esum)
{
  cout<<osum-esum;
}

else
{
  cout<<esum-osum;
}


}