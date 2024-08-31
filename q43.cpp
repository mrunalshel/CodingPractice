#include<iostream>
using namespace std;
int main()
{
    char arr[100]={"bbhhhttttgg"};
int icnt=0,iq=0;
char fina;
    for(int i=0;i<12;i++)
    {
        icnt=0;
        for(int j=0;j<12;j++)
        {
            if(arr[j]==arr[i])
            {
                icnt++;
            }
        }//for aatla sampla

        if(icnt>iq)
        {
            iq=icnt;
            fina=arr[i];
        }
    }

cout<<fina;
    return 0;
}