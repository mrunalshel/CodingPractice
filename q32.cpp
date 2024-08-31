#include<iostream>
using namespace std;
int main()
{
    char ch[44]={"mru Mru mm"};
    
    for(int i=0;i<10;i++)
    {
        if(ch[i]=='m')
        {
            ch[i]=ch[i]-32;
        }
        else if(ch[i]=='M')
        {
            ch[i]=ch[i]+32;
        }

    }
    cout<<ch;
    return 0;
}