#include<iostream>
using namespace std;
char fun ()
{
    char ph[68]={'\0'};
   char ch='z';
   int y=9;
int imod=34;

   while(y!=imod+1)
   {
y++;

ch++;

cout<<ph[0];
ph[0]=ch;
   }

   return ph[0];
}
int main()
{
char  ch=fun();
cout<<ch;
return 0;
}