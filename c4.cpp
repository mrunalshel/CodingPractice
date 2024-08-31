#include<iostream>
using namespace std;

int pro(char ch[])
{
int icnt=0;
while(*ch!='\0')
{
if(*ch=='a')
{
icnt++;
}
ch++;

}

return icnt;
}

int main()
{
int icnt=0;
char ch[890];
cout<<"enter string";
scanf(" %[^'\n']s",ch);
int icnt1=pro(ch);
cout<<icnt1;
return 0;

}