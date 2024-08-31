#include<iostream>
using namespace std;
int main()
{
    string ch={"nn bbb bbb"};
    string vh;
    int n=0;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]!=' ')
        {
        vh[n]=ch[i];
        n++;
        }
    }
    int t=0;
while(t!=n)
{
    cout<<vh[t];
    t++;
}
cout<<vh[0];
}