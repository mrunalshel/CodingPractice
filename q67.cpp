#include<iostream>
using namespace std;
int main()
{
    int u=0;
string ans;
string arr[7];
    string ch={"hii byee kyy"};
   for(int i=0;i<ch.length();i++)
   {
    if(ch[i]!=' ')
    {
        ans=ans+ch[i];
    }

    else
    {
        arr[u]=ans;//u last paryant jaeeel arr chya manual
        ans=' ';
        u++;
    }
   }
   arr[u]=ans;  /*imp */   
   //cout<<arr[2]; /*imp*/


string z[u];
for(int k=0;k<=2;k++)
{
    cout<<"hii";
    z[k]=arr[u];
    u--;
}
   cout<<z[1];
    return 0;
}