#include<iostream>
using namespace std;
int main()
{

    char ch[100]={"hhjjjjjjgggttt"};
    char maxchar=ch[0];
    int maxicnt=0,icnt=0;
    /* sgle count krayche max brobr char pn store krne */
    for(int i=0;i<20;i++)
    {
        icnt=0;
for(int j=0;j<20;j++)
{
    if(ch[i]==ch[j])
    {
        icnt++;
    }
}//aatla for loop sampla


if(icnt>maxicnt)
{
    maxchar=ch[i];
    maxicnt=icnt;
}
    }

    cout<<maxchar;
}