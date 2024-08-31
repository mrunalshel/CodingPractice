#include<iostream>
using namespace std;

void fun(string ch)
{
 
 /* max count kont char ahe kadhte  hhhhhhhhuu */
int cnt=0,max=0;
char maxchar=ch[0];
 for(int i=0;i<ch.length();i++)
 {
cnt=0;
for (int j=0;j<ch.length();j++)
{

    if(ch[i]==ch[j])
    {
        cnt++;
    }
}

if((cnt>max)||(cnt==max))
{
if(cnt==max)
{
    int maxin=max;
    int intcnt=cnt;
    if(max>cnt)
    {
        max=max;
        maxchar=ch[i];
    }
    else{
        max=cnt;
        maxchar=ch[i];
    }
}

else{
    max=cnt;
    maxchar=ch[i];
}
}



 }
 
for(int k=0;k<ch.length();k++)
{
if(ch[k]==maxchar)
{
    ch[k]='t';
}
} 
cout<<ch[0];
cout<<ch[1];
cout<<ch[2];
cout<<ch[3];
cout<<ch[4];
}


int main()
{
string ch="xxxbbbc";

fun(ch);



    return 0;
}