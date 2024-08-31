
#include<iostream>
using namespace std;
int main()
{
int icnt=0;
string bh{"aas  s ps"};

char arr[30]={'\0'};
int r=0,sp=0,f=0,s=1;
for(int i=0;i<bh.length();i++)
{
    sp=0,r=0;
    for(int j=0;j<bh.length();j++)
    {
        if((bh[i]==arr[j])&&(bh[i]!=' '))
        {
            sp=1;
            
        }
        if((bh[i]==bh[j])&&(bh[j]!=' '))
        {
            r++;
        }
    }
    if((sp==0)&&(bh[i]!=' '))
    {
        arr[f]=bh[i];
        arr[s]=r+'0';
        f=f+2;
        s=s+2;
    }
}
cout<<arr[0];
cout<<arr[1];
cout<<arr[2];
cout<<arr[3];
cout<<arr[4];
cout<<arr[5];
cout<<arr[6];
cout<<arr[7];
cout<<arr[8];
cout<<arr[9];

return 0;
}
