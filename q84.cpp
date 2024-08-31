#include<iostream>
using namespace std;
int main()
{
   
int sp=0,n=0;
char arr[23]={"ddwwwqqqertyd"};
char brr[23]={'\0'};
for(int i=0;i<23;i++)
{
    sp=0;
   for(int j=0;j<23;j++)
   {
    if(brr[j]==arr[i])
    {
        sp=1;
    }
   }

   if(sp==0)
   {
brr[n]=arr[i];//n last paryant jaeel brr chya
n++;
   }
}

int dou=0,icnt=0;
for(int i=0;i<n;i++)
{
    icnt=0;
    for(int j=0;j<n;j++)
    {
        if (brr[i]==arr[j])
        {
            icnt++;
        }
    }

    if(icnt>1)
    {
        dou++;
    }
}

cout<<dou;
 return 0;
}