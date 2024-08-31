#include<iostream>
using namespace std;


void fun(string *bh,string p[])  // brobr//
{

cout<<bh[1];
}

int main()
{
char ch[13]={'\0'};
string bh[3]={"indoi d ddd","hiiiii"};//note down
string *p=bh;
fun(bh,p);         /*//bh[],& aas pathvn chukich      p cha array aani poin krun pathu nye*/
}