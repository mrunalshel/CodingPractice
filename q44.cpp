#include<iostream>
using namespace std;
int main()
{
    char arr[100]={"nnhhhttttgg"};
int icnt=0,iq=0,ahe=0;
int p=0,q=1;//st array set krnyasathi
//b4h4f5cf

string st={'\0'};
for(int i=0;i<15;i++)
{
    ahe=0,icnt=0;
    for(int j=0;j<15;j++)
    {
        if(arr[i]==arr[j])
        {
            icnt++;
        }
    }//aatla for loop sampla 1 no


    for(int k=0;k<14;k++)
    {
if(arr[i]==st[k])
    
{
    ahe=9;
}
    }  //atla 2no cha for lopp sampla


if(ahe!=9)
{
   
    st[p]=arr[i];
    st[q]=icnt+'0';
   p= p+2;
   q= q+2;
   
}
}

cout<<st[0];
cout<<st[1];
cout<<st[2];
cout<<st[3];
cout<<st[4];
cout<<st[5];
cout<<st[6];
cout<<st[7];

    return 0;
}