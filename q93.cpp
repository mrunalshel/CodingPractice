#include<iostream>
using namespace std;
int main()
{
   //6
   
   char ch[68]={"jjdhdhdudhhii"};
  for(int i=0;i<50;i++)
  {
    if((ch[i]=='d')&&(ch[i+1]=='u')&&(ch[i+2]=='d')&&(ch[i+3]=='h'))
    {
       ch[i]='p';
       ch[i+1]='a';
       ch[i+2]='n';
       ch[i+3]='i';
    }
  }
  cout<<ch;
return 0;
}