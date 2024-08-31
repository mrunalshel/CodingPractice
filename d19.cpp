#include<iostream>
using namespace std;
void pro(char ch[])
{
int icnt=0;
while(*ch!='\0')
{
if(*ch==' ')
{
icnt++;
ch++;
}
}
cout<<icnt;
}
int main()
{
char ch[40]={'\0'};
cout<<"enter string";
scanf(" %[^'\n']s",&ch);
pro(ch);
return 0;

}