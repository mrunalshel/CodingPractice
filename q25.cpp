#include<iostream>
using namespace std;
int main()
{
    char ch[19]={"abbccccc"};
     char fina[19]={'\0'};
    char arr='a';
    int icnt=0,y=0,z=1;
    for(int i=1;i<=52;i++)
    {
        icnt=0;
        for(int j=0;j<19;j++)
        {
            if(ch[j]==arr)
            {
                icnt++;
            }
        }

        if(icnt>1)
        {

            
            
            fina[y]=arr;
            fina[z]=(char)icnt+'0';
            y=y+2;
            z=z+2;
        }
        arr++;
    }
    cout<<fina;
    
    return 0;
}
