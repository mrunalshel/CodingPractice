#include<iostream>
using namespace std;
int main()
{
int icnt=0,time=0;
    int arr[5]={1200,1325,1455,1500,1677};
 int brr[5]={1700,1727,1555,1600,1679};
/* brr[i-1]>arr[i]  aani aadhiche sgle bee[i] check krne jrr ek jri motha asel trr icnt ++ trr  icnt++ */

for(int i=0;i<5;i++)
{
time=0;
    for(int j=0;j<=i;j++)
    {

        if(brr[j]>arr[i])
        {
            time=1;
        }
    }
if(time==1)
    {
        icnt++;
    }
}
cout<<icnt;
return 0;
}