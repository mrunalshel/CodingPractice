#include<iostream>
using namespace std;
int main()
{
   string st="aaaa";
   string ft="AAAs";
   int i=st.length();
   int j=ft.length();
int n=0,nahi=0;
  char ch[i+j]={'\0'};
//st le char gole kru
  for(int i=0;i<st.length();i++)
  {
    ch[i]=st[i];
    n++;//ch chya len paryant jaeel
  }
for(int j=0;j<ft.length();j++)
{
    ch[n]=ft[j];
    n++;
}

for(int k=0;k<n;k++)
{
    
    int icnt=0;
    for(int h=0;h<n;h++)
    {
        if((ch[k]==ch[h])||(ch[k]-32==ch[h])||(ch[k]+32==ch[h]))
        {
            icnt++;
        }
    }

    if(icnt%2!=0)
    {
        nahi=5;
    }
}

if(nahi!=5)
{
    cout<<"yes";
}
else
{
    cout<<"nooo anagram";
}
return 0;
}