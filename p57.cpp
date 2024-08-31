#include<iostream>
using namespace std;
int main()
{
   int p=0,ans=0; 
char bh[14]={"shelke"};
char ch[50]={"mrunalshelke"};
for(int i=0;i<50;i++)
{

    if((ch[i]=='m')&&(ch[i+1]=='r')&&(ch[i+2]=='u')&&(ch[i+3]=='n')&&(ch[i+4]=='a')&&(ch[i+5]=='l'))
    {
        i=ans;
while(p!=6)
{
    ch[ans]=bh[p];
    p++;
    ans++;
}

    }
}

cout<<ch[0];
cout<<ch[1];
cout<<ch[2];
cout<<ch[3];
cout<<ch[4];
cout<<ch[5];
cout<<ch[6];
cout<<ch[7];
cout<<ch[8];
cout<<ch[9];
cout<<ch[10];
cout<<ch[11];

 return 0;
}