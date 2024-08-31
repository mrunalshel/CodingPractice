#include<iostream>
using namespace std;
int pro(char ch[])
{
int icnt=0;
while(*ch!='\0')
{

}
return icnt;
}
int main()
{
int icnt=0;
char ch[890]={'\0'};
cout<<"enter string";
scanf(" %[^'\n']s",ch);
int ans=pro(ch);
cout<<ans;
return 0;

}