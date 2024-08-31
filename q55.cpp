#include<iostream>
using namespace std;
int main()
{
int ir[5]={20,1,2,4,5};
int n=11,sum=0;
/* */
int iq=1;  //shevtparyant janar ir chya while(iq!=4)
for(int i=0;i<4;i++)
{
    sum=0;
    for(int j=0;j<4;j++)
    {
if(j<=iq)
{

sum=sum+arr[j];

if(sum==n)
{
    for(int k=0;k<=j;k++)
    {
        arr[k]=j;
        cout<<"j";
    }
    break;
}

    }

}//aatla for sampla
iq++;
}// last for sampla

    return 0;
}