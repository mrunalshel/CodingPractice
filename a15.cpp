#include<iostream>
using namespace std;
int main()
{
    int sp=0,icnt=0;
    char ch[12]={"jjhhffggg"};
    // int char mdhe con krva lagnar ek new array create krne tyat nsla tr takne asla trr taku nye
    char bh[12]={'\0'};
   // cout<<bh[0];
    int n=0,m=1;
    for(int i=0;i<12;i++)
    {
        sp=0,icnt=0;
        for(int j=0;j<12;j++)
        {
            if(ch[i]==bh[j])
            {
                icnt++;
                sp=1;
            }
        }

        if(sp==0)
        {
            bh[n]=ch[i];
            bh[m]=(char)(icnt+'0');
            n=n+2;
            m=m+2;
        }

    }

    cout<<bh[0];
    cout<<bh[1];
    
    cout<<bh[2];
    cout<<bh[3];
     
    cout<<bh[4];
    cout<<bh[5];
     
    cout<<bh[6];
    cout<<bh[7];
    return 0;
}