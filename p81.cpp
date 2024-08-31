#include<iostream>
using namespace std;


int main()
{
string st="zwab";
 int n=0;



 while(n!=st.length())
 {
  char a='a';
  int ino=1;
for(int i=1;i<=26;i++)
{

if(st[n]==a)
{
  cout<<" ";
  cout<<ino;
  cout<<" ";
}
a++;
ino++;

}
  
  
  
  n++;
 }

return 0;
}