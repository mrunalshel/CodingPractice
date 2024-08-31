#include<iostream>
using namespace std;
int main()
{

char ch[23]={"aabbbaaf"};
char bh[23]={'\0'};
int p=0;
for(int i=0;i<23;i++)
{
if(ch[i]!='a')
{
    bh[p]=ch[i];
    p++;
}
}


cout<<bh[0];
cout<<bh[1];
cout<<bh[2];
cout<<bh[3];
cout<<bh[4];

}