#include<iostream>
using namespace std;
int main()
{
char ch[10]={"hhh#jjj#"};
char bh[10]={'\0'};
int n=0;
for(int i=0;i<10;i++)
{
    if(ch[i]=='#')
    {
bh[n]='#';
n++;
    }

}
for(int i=0;i<10;i++)
{
    if(ch[i]!='#')
    {
bh[n]=ch[i];
n++;
    }

}

for(int i=0;i<10;i++)
{
    cout<<bh[i];

}
}