#include<iostream>
using namespace std;
int main()
{
char ch[]={'\0'};
scanf("%[ ^'\n']s",ch);
char *p=ch;
char n=' ';
int i=0,icnt=0;

while(*p!='\0')
{
if(*p==n)
{
icnt++;

}
p++;
i++;
}
cout<<icnt;
return 0;
}