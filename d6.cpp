#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    string s="MRUnal";
for(int i=0;i<5;i++)
{

    if(((s[i])>='A')&&((s[i])<='Z'))
    {

        s[i]=s[i]+32;
    }
}
cout<<s;
return 0;
}