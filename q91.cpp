#include<iostream>
using namespace std;
int main()
{
    //4
    string ch[3]={"hii","jooo","jii"};
 int n=3,s=0;
 int i=n-1,u=0;
string emp[3];
 while(s!=n)
 {
emp[i]=ch[u];
i--;
u++;
s++;
 }
   cout<<emp[0];
   cout<<emp[1];
    cout<<emp[2]; 
return 0;
}