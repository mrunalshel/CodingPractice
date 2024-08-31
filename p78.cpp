#include<iostream>
using namespace std;
int main()
{

string ab="accd";
string bb="AccD";

int icnt=0,n=4;

if(ab.length()!=bb.length())
{
    cout<<"nooo";
}

for(int i=0;i<n;i++)
{
icnt=0;
    for(int j=0;j<n;j++)
    {
    if((ab[i]==bb[j])||(bb[j]-32==ab[i])||(bb[j]+32==ab[i]||ab[j]==ab[i]))
    {
icnt++;
    }
    }
cout<<ab[i];
cout<<icnt;

    if((icnt%2!=0))
    {
cout<<"nooo";
break;
    }
}

}