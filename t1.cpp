#include<iostream>
using namespace std;
int main()
{
    string st=NULL;
    st="INDIA";
    int in=st.length();
    char ft[in-1]={'\0'};
    int n=0;
    for(int i=in-1;i>-1;i--)
    {
ft[n]=st[i];
n++;
    }
    cout<<ft;
    return 0;
}
