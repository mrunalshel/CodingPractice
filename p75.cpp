#include<iostream>
using namespace std;
int main()
{
    int in=0;
    string ah="hii";
    string bh="thy";

char ch[6]={'\0'};
    for(int i=0;i<3;i++)
    {
        ch[i]=ah[i];
       in++;

    }
cout<<in;
    for(int j=3;j<6;j++)
    {
        ch[j]=bh[j];
       in++;
cout<<ch[in];
    }

    cout<<ch[0];
    cout<<ch[1];
    cout<<ch[2];
    cout<<ch[3];
    cout<<ch[4];
    cout<<ch[5];

    return 0;
}