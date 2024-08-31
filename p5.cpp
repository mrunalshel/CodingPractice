#include<iostream>
using namespace std;
int main()
{
int k=0;
    char ch[]="mrunal";
    char *p=ch;

 char bh[]={'\0'};
    char *w=bh;

    for(int i=5;i>=0;i--)
    {
        w[k]=p[i];
        k++;
    }
    cout<<bh;
    cin>>k;
    return 0;
}