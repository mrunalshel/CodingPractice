#include<iostream>
using namespace std;
int main()
{
int icnt=0,iq=0;           
   int arr[5]={111,330,340,7,10};//pudhche sgle mothete astil trr
for(int i=0;i<3;i++)
{
    icnt=0;
    for(int j=i;j<4;j++)
    {
if(arr[j]<arr[i])
{
    icnt=2;
}
    }

    if(icnt==0)
    {
        iq++;
        cout<<arr[i];
    }
}
cout<<iq;
return 0;
}
