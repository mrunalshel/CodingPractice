#include<iostream>
using namespace std;
int main()
{
    int p=0,icnt=0;
    string ch="SOLP";
    string bh={"Sopp"};
 char nh[40]={'\0'};
for(int i=0;i<4;i++)
{
    nh[p]=ch[i];   //pnh chya aani bh chya length evdha
    p++;
}

for(int i=0;i<4;i++)
{
    nh[p]=bh[i];   //pnh chya aani bh chya length evdha
    p++;
}

int gg=0;
for(int i=0;i<p;i++)
{
icnt=0;
    for(int j=0;j<p;j++)
    {
if((nh[i]==nh[j])||(nh[j]-32==nh[i])||(nh[j]+32==nh[i]))
{
    icnt++;
}
    }

    if(icnt%2!=0)  //condition check krne
    {
        break;
    }
    gg++;
}

if(gg==(p))
{
    cout<<"success";
}







}