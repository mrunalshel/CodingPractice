#include<iostream>
using namespace std;
int main()
{

    char ch[3]={12,13,14};
    if(ch[1]>9)
    {
        ch[1]='A';
    }
cout<<ch[1];
    return 0;
}