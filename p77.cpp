#include<iostream>
using namespace std;
int main()
{


    int i=1,j=2,sum=1;
cout<<i;
cout<<j;



sum=i+j;
cout<<sum;
while(sum<20)

{
i=sum;
sum=j+sum;

if(sum>20)
{
    break;
}
cout<<sum;
j=i;


}
    return 0;
}