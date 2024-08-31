#include<iostream>
using namespace std;
int main()
{


int arr[5]={9,10,13,11,12};
/*asa array jyat donhi pn jshechya tshe store krne mg char gheu array*/
char ch[50]={'\0'};
char brr[5]={'\0'};
for(int i=0;i<50;i++)
{
   static char ch1='A';
    if(i>9)
    {
        ch[i]=ch1;
        ch1++;
    }
}
for(int j=0;j<5;j++)
{
if(arr[j]<=9)
{
    brr[j]=arr[j]+'0';
}
else{
    int h=arr[j];
    brr[j]=ch[h];
}
}
    cout<<brr[0];
     cout<<brr[1];
      cout<<brr[2];
       cout<<brr[3];
        cout<<brr[4];
         cout<<brr[5];



    return 0;
}