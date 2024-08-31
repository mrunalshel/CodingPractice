#include<iostream>
using namespace std;
int main()
{

char ch[23]={"a7b9bba8f"};
char bh[23]={'\0'};
int icnt=0;
for(int i=0;i<23;i++)
{

    if((ch[i]>='0')&&(ch[i]<='9'))
    {
        icnt++;
        bh[i]=ch[i];
        cout<<bh[i];
    }
}

cout<<icnt;
}