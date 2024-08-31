#include<iostream>
using namespace std;
int main()
{
char ch[50]={"ssssffggggg"};
char bh[50]={'\0'};
int n=0,icnt=0;
for(int i=0;i<14;i++)
{
    icnt=0;
for(int j=0;j<14;j++)
{
if(ch[i]==bh[j])
{
    icnt=2;
}
}
if(icnt==0)
{
    bh[n]=ch[i];
    
    n++;
}
}
int noarray[n]={0};

//sing char array bh
for(int k=0;k<14;k++)
{
int in=0;
    for(int g=0;g<14;g++)
    {
        if(ch[g]==bh[k])
        {
            in++;
        }
    }

    noarray[k]=in ;
}
    
//single array bh
//no arrat noarray
    char fina[14]={'\0'};


    int p=0,th=0;
     p=noarray[p];
    char dd=bh[th];

         while(p!=0)
         {
            fina[th]=bh[th];
th++;
            p--;
         }

cout<<fina[0];
cout<<fina[1];

return 0;
}