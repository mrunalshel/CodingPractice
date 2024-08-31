#include<iostream>
using namespace std;
int main()
{
    int icnt=0;
    string bh={"hii jii jiii ji hii"};//bf[0]=h  string len paryant successs
    int p=0, sp=0;
 string f=bh;
 string ans;
 string nh[100];
for(int i=0;i<bh.length();i++)
{
    if(bh[i]!=' ')
    {
        ans=ans+bh[i];
    }
else if(bh[i]==' ')
{
    nh[p]=ans;//p last paryant jael nh chya
    p++;
    ans=" ";
}

}

cout<<nh[3];
for(int j=0;j<p;j++)
{
    for(int k=0;k<p;k++)
    {
        if((nh[j]==nh[k])&&(k!=j))
        {
            sp++;
        }
    }
}
if(sp>0)
{
    cout<<"yes";
    cout<<sp;
}
    return 0;
}